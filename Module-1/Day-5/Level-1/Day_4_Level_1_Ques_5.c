#include <stdio.h>

struct student {
  int id;
  char name[50];
};
void swap(struct student *s1, struct student *s2) {
  struct student temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}
int main() {
  struct student s1 = {1, "John"};
  struct student s2 = {2, "Mary"};

  printf("Before swapping:\n");
  printf("s1.id = %d\n", s1.id);
  printf("s1.name = %s\n", s1.name);
  printf("s2.id = %d\n", s2.id);
  printf("s2.name = %s\n", s2.name);

  swap(&s1, &s2);

  printf("After swapping:\n");
  printf("s1.id = %d\n", s1.id);
  printf("s1.name = %s\n", s1.name);
  printf("s2.id = %d\n", s2.id);
  printf("s2.name = %s\n", s2.name);

  return 0;
}

