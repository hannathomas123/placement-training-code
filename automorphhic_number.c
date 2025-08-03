#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long long square = n * n;
    long long temp = n;
    long long mod = 1;

    // Calculate the modulus as 10^number_of_digits
    while (temp > 0) {
        mod *= 10;
        temp /= 10;
    }

    // Check if the last digits of square match the original number
    if (square % mod == n) {
        printf("%lld is an automorphic number.\n", n);
    } else {
        printf("%lld is not an automorphic number.\n", n);
    }

    return 0;
}
