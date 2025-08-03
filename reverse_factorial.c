#include <stdio.h>

// Recursive function to compute factorial of a non-negative integer
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    long long result = factorial(n);
    printf("Factorial of %d = %lld\n", n, result);
    return 0;
}
