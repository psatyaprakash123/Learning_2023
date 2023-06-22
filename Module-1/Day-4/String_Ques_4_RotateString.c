#include <stdio.h>
#include <string.h>

void rotateString(char* str, int pos) {
    int len = strlen(str);
    pos %= len;
    char temp[pos + 1];
    strncpy(temp, str, pos);
    temp[pos] = '\0';
    memmove(str, str + pos, len - pos);
    strcpy(str + len - pos, temp);
}

int main() {
    char s[100];
    int p;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Enter the rotation position: ");
    scanf("%d", &p);

    printf("Before rotation: %s\n", s);

    rotateString(s, p);

    printf("After rotation: %s\n", s);

    return 0;
}
