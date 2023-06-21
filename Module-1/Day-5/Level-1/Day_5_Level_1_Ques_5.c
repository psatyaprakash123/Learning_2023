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
void searchByName(struct Student* students, int num, const char* name) {
    int found = 0;
    for (int i = 0; i < num; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
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
    char searchName[20];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    searchByName(students, num, searchName);
    free(students);

    return 0;
}

