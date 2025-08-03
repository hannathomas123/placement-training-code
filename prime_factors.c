#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    int num = n;
    // Print the number of 2s that divide n
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    // n must be odd at this point. Now check for odd factors.
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    // If remaining num is a prime greater than 2
    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");
    return 0;
}
