#include <stdio.h>
#include <string.h>

// Recursive function to match string s against pattern p with wildcards
int match(const char *s, const char *p) {
    if (*p == '\0') return *s == '\0';
    if (*p == '*') {
        // Skip over multiple '*' characters
        while (*(p+1) == '*') p++;
        // '*' matches zero characters or one/more characters
        return (match(s, p+1) || (*s != '\0' && match(s+1, p)));
    }
    if (*p == '?' || *p == *s) {
        return (*s != '\0' && match(s+1, p+1));
    }
    return 0;
}

int main(void) {
    char str[256], pattern[256];

    printf("Enter the string: ");
    if (!fgets(str, sizeof(str), stdin)) return 1;
    printf("Enter the pattern: ");
    if (!fgets(pattern, sizeof(pattern), stdin)) return 1;

    // Remove trailing newline characters
    str[strcspn(str, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';

    if (match(str, pattern)) {
        printf("The string matches the pattern.\n");
    } else {
        printf("The string does not match the pattern.\n");
    }

    return 0;
}
