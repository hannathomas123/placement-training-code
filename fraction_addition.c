#include <stdio.h>
#include <stdlib.h>

// Compute the greatest common divisor
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Simplify fraction represented by numerator and denominator
void simplify(int *num, int *den) {
    int g = gcd(abs(*num), abs(*den));
    *num /= g;
    *den /= g;
    // Ensure denominator is positive
    if (*den < 0) {
        *den = -(*den);
        *num = -(*num);
    }
}

// Add two fractions n1/d1 and n2/d2, store result in nr/dr
void addFractions(int n1, int d1, int n2, int d2, int *nr, int *dr) {
    *nr = n1 * d2 + n2 * d1;
    *dr = d1 * d2;
    simplify(nr, dr);
}

int main(void) {
    int n1, d1, n2, d2;
    // Read two fractions: numerator and denominator of each
    if (scanf("%d %d %d %d", &n1, &d1, &n2, &d2) != 4) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    if (d1 == 0 || d2 == 0) {
        fprintf(stderr, "Denominator cannot be zero\n");
        return 1;
    }

    int nr, dr;
    addFractions(n1, d1, n2, d2, &nr, &dr);
    printf("%d/%d\n", nr, dr);
    return 0;
}
