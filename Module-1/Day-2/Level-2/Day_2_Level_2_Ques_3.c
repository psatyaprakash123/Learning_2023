#include <stdio.h>
#include <string.h>

void sortStrings(char *strings[], int size) {
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}
int main() {
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    getchar();

    char** strings = (char**)malloc(numStrings * sizeof(char*));

    for (int i = 0; i < numStrings; i++) {
        printf("Enter string %d: ", i + 1);
        char input[100];
        fgets(input, sizeof(input), stdin);
        strings[i] = strdup(input);
    }

    printf("Before sorting:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s", strings[i]);
    }

    sortStrings(strings, numStrings);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s", strings[i]);
    }

    return 0;
}
