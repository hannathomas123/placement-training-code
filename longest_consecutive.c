#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp);

    int max_len = 1;
    int curr_len = 1;
    int best_start = arr[0];
    int curr_start = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            // skip duplicates
            continue;
        } else if (arr[i] == arr[i - 1] + 1) {
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                best_start = curr_start;
            }
            curr_len = 1;
            curr_start = arr[i];
        }
    }
    // Final check
    if (curr_len > max_len) {
        max_len = curr_len;
        best_start = curr_start;
    }

    printf("Longest consecutive subsequence length: %d\n", max_len);
    printf("Subsequence: ");
    for (int i = 0; i < max_len; i++) {
        printf("%d ", best_start + i);
    }
    printf("\n");

    free(arr);
    return 0;
}
