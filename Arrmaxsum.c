#include <stdio.h>

int maxArraySum(int arr[], int n, int k) {
    int MaxSum = -1000000; 
    for (int i = 0; i <= n - k; i++) {
        int currSum = 0;
        for (int j = i; j < i + k; j++) {
            currSum += arr[j];
        }
        if (currSum > MaxSum) {
            MaxSum = currSum;
        }
    }
    return MaxSum;
}

int main() {
    int arr[7] = {-1, 2, 4, 5, -4, 3, -7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int data = maxArraySum(arr, n, k);
    printf("%d", data);

    return 0;
}