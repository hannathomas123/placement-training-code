#include <stdio.h>

long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    if (scanf("%d", &base) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter exponent (non-negative): ");
    if (scanf("%d", &exponent) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (exponent < 0) {
        printf("Exponent should be non-negative.\n");
        return 1;
    }
    long long result = power(base, exponent);
    printf("%d ^ %d = %lld\n", base, exponent, result);
    return 0;
}
