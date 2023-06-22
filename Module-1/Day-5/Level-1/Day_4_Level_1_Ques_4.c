#include <stdio.h>
#include <stdlib.h>
struct student {
  char name[50];
  int roll_number;
  float marks;
};
int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  struct student *students = (struct student *)malloc(n * sizeof(struct student));
  for (int i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_number);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &students[i].marks);
  }
  for (int i = 0; i < n; i++) {
    printf("Name: %s\n", students[i].name);
    printf("Roll number: %d\n", students[i].roll_number);
    printf("Marks: %.1f\n", students[i].marks);
  }
  free(students);

  return 0;
}

