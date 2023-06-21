#include <stdio.h>
#include <ctype.h>

int findCharacterType(char c) {
    if (isupper(c)) {
        return 1; // Uppercase letter
    } else if (islower(c)) {
        return 2; // Lowercase letter
    } else if (isdigit(c)) {
        return 3; // Digit
    } else if (isprint(c)) {
        return 4; // Printable symbol
    } else if (!isprint(c)) {
        return 5; // Non-printable symbol
    } else {
        return -1; // Invalid character
    }
}

int main() {
    char ch;
    int type;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    type = findCharacterType(ch);

    switch (type) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}

