#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    double realPart = -b / (2 * a);
    double imagPart = 0;

    if (discriminant > 0) {
        double root1 = ( -b + sqrt(discriminant) ) / (2 * a);
        double root2 = ( -b - sqrt(discriminant) ) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1: %.6f\n", root1);
        printf("Root 2: %.6f\n", root2);
    } else if (discriminant == 0) {
        double root = realPart;
        printf("Roots are real and equal:\n");
        printf("Root: %.6f\n", root);
    } else {
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct:\n");
        printf("Root 1: %.6f + %.6fi\n", realPart, imagPart);
        printf("Root 2: %.6f - %.6fi\n", realPart, imagPart);
    }

    return 0;
}
