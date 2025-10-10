#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currMax = arr[0];

    for (int i = 1; i < n; i++) {
        
        currMax = (arr[i] > (currMax + arr[i])) ? arr[i] : (currMax + arr[i]);
        
        maxSoFar = (maxSoFar > currMax) ? maxSoFar : currMax;
    }

    return maxSoFar;
}

int main() {
     
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = maxSubArraySum(arr, n);
    printf("Maximum subarray sum is: %d\n", maxSum);

    return 0;
}