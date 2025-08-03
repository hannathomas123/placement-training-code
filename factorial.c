#include <stdio.h>

int main(void){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);
    return 0;
}
