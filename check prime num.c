
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime check
    if (n <= 1) {
        isPrime = 0;  // numbers <= 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime == 1) {
        printf("%d is a Prime Number\n", n);
    } else {
        printf("%d is NOT a Prime Number\n", n);
    }

    return 0;
}