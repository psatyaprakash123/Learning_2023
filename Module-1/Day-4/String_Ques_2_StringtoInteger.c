#include <stdio.h>
#include <stdlib.h>

int str_to_int(char *str) {
  int num = 0;
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
      num = num * 10 + (str[i] - '0');
    } else {
      return -1;
    }
    i++;
  }
  return num;
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);

  int num = str_to_int(str);

  if (num == -1) {
    printf("The string is not a valid integer.\n");
  } else {
    printf("The integer value is: %d\n", num);
  }

  return 0;
}


