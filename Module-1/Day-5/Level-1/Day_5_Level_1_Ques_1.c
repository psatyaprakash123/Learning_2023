#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parse(char* input, struct Student* students, int num) {
    char input2[100];
    strncpy(input2, input, sizeof(input2));

    char* x = " ";
    char* y = strtok(input2, x);
    int count = 0;

    while (y != NULL && count < num) {
        students[count].rollno = atoi(y);
        y = strtok(NULL, x);
        strcpy(students[count].name, y);
        y = strtok(NULL, x);
        students[count].marks = atof(y);

        y = strtok(NULL, x);
        count++;
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

    printf("Enter student data as 1234 Priyadarshi 99.00\n");
    for (int i = 0; i < num; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        parse(input, &students[i], 1);
    }

    printf("\nStudent data:\n");
    for (int i = 0; i < num; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
