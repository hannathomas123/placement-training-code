#include<stdio.h>

int main(void){
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Non-repeating elements are:\n");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                break;
            }
        }
        if (j == n) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
