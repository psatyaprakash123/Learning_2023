#include <stdio.h>

void printBits(int num);

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printBits(num);

    return 0;
}

void printBits(int num) {
    int i;

    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}

