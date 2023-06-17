#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encode(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] += 1;  // Increment ASCII value of each character by 1
    }
}

void decode(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] -= 1;  // Decrement ASCII value of each character by 1
    }
}
int main() {
    char originalString[100];
    printf("Enter a string: ");
    fgets(originalString, sizeof(originalString), stdin);
    originalString[strcspn(originalString, "\n")] = '\0';

    printf("Original string: %s\n", originalString);

    encode(originalString);
    printf("Encoded string: %s\n", originalString);

    decode(originalString);
    printf("Decoded string: %s\n", originalString);

    return 0;
}

