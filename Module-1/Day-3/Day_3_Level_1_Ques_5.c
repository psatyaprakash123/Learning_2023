#include <stdio.h>

int main() {
  int n, i, j, largest, smallest, num, digit;

  printf("Enter the number of numbers: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Not Valid\n");
    return 0;
  }

  largest = -1;
  smallest = 10;

  for (i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &num);

    if (num < 10) {
      printf("Not valid\n");
      continue;
    }

    while (num > 0) {
      digit = num % 10;

      if (digit > largest) {
        largest = digit;
      }

      if (digit < smallest) {
        smallest = digit;
      }

      num /= 10;
    }

    printf("Largest digit in %d is %d\n", i + 1, largest);
    printf("Smallest digit in %d is %d\n", i + 1, smallest);
    largest = -1;
    smallest = 10;
  }

  return 0;
}

