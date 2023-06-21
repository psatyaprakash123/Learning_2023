#include <stdio.h>
struct student {
  int id;
  char name[50];
  float marks[5];
};
struct student *modify_student(struct student *s) {
  s->id = 10;
  strcpy(s->name, "Priyadarshi");
  for (int i = 0; i < 5; i++) {
    s->marks[i] = 50;
  }
  return s;
}
int main() {
  struct student s;
  s.id = 1;
  strcpy(s.name, "Sampath");
  for (int i = 0; i < 5; i++) {
    s.marks[i] = i;
  }

  struct student *p = modify_student(&s);
  printf("The student ID is: %d\n", p->id);
  printf("The student name is: %s\n", p->name);
  for (int i = 0; i < 5; i++) {
    printf("The marks of subject %d is: %.2f\n", i + 1, p->marks[i]);
  }

  return 0;
}

