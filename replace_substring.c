#include <stdio.h>
#include <string.h>

void replaceSubstring(const char *str, const char *oldWord, const char *newWord, char *result) {
    const char *pos = str;
    int oldLen = strlen(oldWord);
    int newLen = strlen(newWord);
    char *resPtr = result;

    while ((pos = strstr(str, oldWord)) != NULL) {
        // copy characters before occurrence
        int len = pos - str;
        memcpy(resPtr, str, len);
        resPtr += len;
        // copy newWord
        memcpy(resPtr, newWord, newLen);
        resPtr += newLen;
        // move past oldWord in str
        str = pos + oldLen;
    }
    // copy remaining characters
    strcpy(resPtr, str);
}

int main(void) {
    char str[1000], oldWord[100], newWord[100], result[1000];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // remove trailing newline

    printf("Enter the substring to replace: ");
    fgets(oldWord, sizeof(oldWord), stdin);
    oldWord[strcspn(oldWord, "\n")] = 0;

    printf("Enter the new substring: ");
    fgets(newWord, sizeof(newWord), stdin);
    newWord[strcspn(newWord, "\n")] = 0;

    replaceSubstring(str, oldWord, newWord, result);

    printf("Resulting string: %s\n", result);
    return 0;
}
