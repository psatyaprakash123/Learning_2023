#include <stdio.h>

struct Student {
    int rollNo;
    char name[100];
    float physics, math, chemistry;
};

void readStudentDetails(struct Student *student) {
    printf("Enter Roll No: ");
    scanf("%d", &(student->rollNo));

    printf("Enter Name: ");
    scanf(" %[^\n]s", student->name);
}

void readStudentMarks(struct Student *student) {
    printf("Enter Marks of Physics: ");
    scanf("%f", &(student->physics));

    printf("Enter Marks of Math: ");
    scanf("%f", &(student->math));

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &(student->chemistry));
}

float calculateTotal(struct Student student) {
    return student.physics + student.math + student.chemistry;
}

float calculatePercentage(struct Student student) {
    return (calculateTotal(student) / 300) * 100;
}

void printSummary(struct Student student, float total, float percentage) {
    printf("\nSummary:\n");
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics: %.2f\n", student.physics);
    printf("Math: %.2f\n", student.math);
    printf("Chemistry: %.2f\n", student.chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    struct Student student;
    float total, percentage;

    readStudentDetails(&student);
    readStudentMarks(&student);

    total = calculateTotal(student);
    percentage = calculatePercentage(student);

    printSummary(student, total, percentage);

    return 0;
}

