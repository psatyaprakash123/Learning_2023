#include <stdio.h>

// Generic swap function using pointers
void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;

    for (size_t i = 0; i < size; i++) {
        char temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int int1 = 5, int2 = 10;
    printf("Before swap: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swap: int1 = %d, int2 = %d\n", int1, int2);

    char char1 = 'A', char2 = 'B';
    printf("Before swap: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swap: char1 = %c, char2 = %c\n", char1, char2);

    float float1 = 1.23f, float2 = 4.56f;
    printf("Before swap: float1 = %.2f, float2 = %.2f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swap: float1 = %.2f, float2 = %.2f\n", float1, float2);

    return 0;
}
