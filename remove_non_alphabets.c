#include <stdio.h>

int main(void) {
    char str[1000];
    // Read a line of input
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int i = 0, j = 0;
    // Remove non-alphabet characters
    while (str[i] != '\0') {
        if ((int)str[i] >= 'A' && (int)str[i] <= 'Z' ||
            (int)str[i] >= 'a' && (int)str[i] <= 'z'){
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';

    // Print the filtered string
    printf("%s", str);
    return 0;
}
