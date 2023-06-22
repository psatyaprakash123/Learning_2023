#include <stdio.h>
#include <ctype.h>

void toggle_case(char *str) {
  for (int i = 0; str[i]; i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else {
      str[i] = toupper(str[i]);
    }
  }
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);

  toggle_case(str);

  printf("The toggled string is: %s\n", str);

  return 0;
}

