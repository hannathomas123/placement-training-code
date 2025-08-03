#include<stdio.h>

int main(void){
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10; // Remove the last digit from n
    }

    printf("Reversed Number: %d\n", reversed);
    return 0;
}
