#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }

    return NULL;
}

int main() {
    char string[1000];
    printf("Enter string\n");
    scanf("%[^\n]s",string);
    getchar();
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);

    char *result = xstrchr(string, ch);

    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", ch, result - string);
    } else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}

