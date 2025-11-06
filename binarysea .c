#include <stdio.h>

int binarySearch(int arr[], int s, int e, int key) {
    if (s > e)
        return -1;  // element not found

    int mid = (s + e) / 2;

    if (arr[mid] == key)
        return mid;  // element found
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key); // search in right half
    else
        return binarySearch(arr, s, mid - 1, key); // search in left half
}

int main() {
    int arr[10], n, key, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements (in sorted order): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;
}