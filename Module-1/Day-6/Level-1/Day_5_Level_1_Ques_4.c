#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initialize(struct Student* students, int num) {
    for (int i = 0; i < num; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}
void display(struct Student* students, int num) {
    printf("Student data:\n");
    for (int i = 0; i < num; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}
void sortDescending(struct Student* students, int num) {
    struct Student temp;
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    getchar(); // To consume the newline character

    struct Student* students = (struct Student*)malloc(num * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    initialize(students, num);

    printf("Enter student data:\n");
    for (int i = 0; i < num; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        getchar(); // To consume the newline character

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove trailing newline

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // To consume the newline character

        printf("\n");
    }

    display(students, num);

    sortDescending(students, num);

    printf("After sorting in descending order based on marks:\n");
    display(students, num);

    free(students);

    return 0;
}
