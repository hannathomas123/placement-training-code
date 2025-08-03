#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *s) {
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(void) {
    int n;
    printf("Enter number of strings: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of strings.\n");
        return 1;
    }

    // Read n strings into a 2D array
    char arr[n][100];
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%99s", arr[i]);
    }

    int maxLen = 0;
    int maxIndex = -1;
    // Iterate through array to find longest palindrome
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            int len = strlen(arr[i]);
            if (len > maxLen) {
                maxLen = len;
                maxIndex = i;
            }
        }
    }

    if (maxIndex >= 0) {
        printf("Longest palindrome: %s\n", arr[maxIndex]);
    } else {
        printf("No palindrome found in the array.\n");
    }

    return 0;
}
