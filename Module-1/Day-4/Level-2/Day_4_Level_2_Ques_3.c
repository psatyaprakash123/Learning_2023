#include <stdio.h>

struct student {
  int id;
  char name[50];
  float marks[5];
  float avg;
};

float average(struct student *s, int n) {
  float avg_marks = 0;
  for (int i = 0; i < n; i++) {
    avg_marks += s[i].avg;
  }
  avg_marks /= n;
  return avg_marks;
}

void studentsAboveAverage(struct student *s, int n, float avg_marks) {
  printf("The students scoring above the average marks are: \n");
  for (int i = 0; i < n; i++) {
    if (s[i].avg > avg_marks) {
      printf("Student ID: %d, Name: %s, Average marks: %.2f\n", s[i].id, s[i].name, s[i].avg);
    }
  }
}

void studentsBelowAverage(struct student *s, int n, float avg_marks) {
  printf("The students scoring below the average marks are: \n");
  for (int i = 0; i < n; i++) {
    if (s[i].avg < avg_marks) {
      printf("Student ID: %d, Name: %s, Average marks: %.2f\n", s[i].id, s[i].name, s[i].avg);
    }
  }
}

int main() {
  int n, i;
  struct student s[100];

  printf("Enter the number of students: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter the student ID: ");
    scanf("%d", &s[i].id);
    printf("Enter the student name: ");
    scanf("%s", s[i].name);
    for (int j = 0; j < 5; j++) {
      printf("Enter the marks of subject %d: ", j + 1);
      scanf("%f", &s[i].marks[j]);
    }
  }

  float avg =average(s, n);

  studentsAboveAverage(s, n, avg);
  studentsBelowAverage(s, n, avg);

  return 0;
}

