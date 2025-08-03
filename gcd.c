#include <stdio.h>

int main(void){
    int a,b,temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b) {
        a %= b;
        temp = b;
        b = a;
        a = temp;
    }

    printf("GCD is %d\n", a);
    return 0;
}
