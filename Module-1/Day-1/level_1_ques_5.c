#include <stdio.h>

int setBit(int num) {
    return num | (1 << 0); // Set 1st bit
}

int clearBit(int num) {
    return num & ~(1 << 31); // Clear 31st bit
}

int toggleBit(int num) {
    return num ^ (1 << 15); // Toggle 16th bit
}

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            return setBit(num);
        case 2:
            return clearBit(num);
        case 3:
            return toggleBit(num);
        default:
            printf("Error: Invalid operation type.\n");
            return num;
    }
}

int main() {
    int num, oper_type, result;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}

