#include <stdio.h>

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int a = 0;
    int b = 1;

    for (int i = 0; i < 4; i++) {
        int temp = number / (b * 10) * b + number % b;

        if (temp > a){
            a = temp;
        }
        b*= 10;
    }

    printf("Largest number after deleting a single digit: %d\n",a);

    return 0;
}

