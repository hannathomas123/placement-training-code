#include <stdio.h>

int main(void){
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    printf("Character counts:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0 && (char)i != '\n') {
            printf("%c: %d\n", (char)i, count[i]);
        }
    }

    return 0;
}
