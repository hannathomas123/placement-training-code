#include <stdio.h>

int main(void){
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count[(int)str2[i]]--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
