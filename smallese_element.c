#include <stdio.h>

int main(void) {
    int n;
    
    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the smallest element
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    // Print the result
    printf("The smallest element in the array is: %d\n", smallest);
    
    return 0;
}
