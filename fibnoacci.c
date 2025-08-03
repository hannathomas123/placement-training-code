#include <stdio.h>

int main(void){
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // first two terms are 0 and 1
        } else {
            next = first + second; // next term is the sum of the previous two
            first = second; // update first to the second term
            second = next; // update second to the next term
        }
        printf("%d ", next);
    }
    
    printf("\n");
    return 0;
}
