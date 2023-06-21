#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};
void read(struct Complex* c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imaginary));
}
void write(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    read(&num1);

    printf("Enter the second complex number:\n");
    read(&num2);

    printf("\n");

    printf("The first complex number is: ");
    write(num1);

    printf("The second complex number is: ");
    write(num2);

    sum = add(num1, num2);
    printf("The sum of the complex numbers is: ");
    write(sum);

    product = multiply(num1, num2);
    printf("The product of the complex numbers is: ");
    write(product);

    return 0;
}

