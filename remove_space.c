#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];
    char result[MAX_LEN];
    int i, j = 0;

    printf("Enter a string: ");
    if (fgets(str, MAX_LEN, stdin) == NULL) {
        return 1;
    }
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Build result without spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String without spaces: %s\n", result);
    return 0;
}
