#include <stdio.h>

int find_diff(int *array, int size) {
  int even_sum = 0;
  int odd_sum = 0;
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      even_sum += array[i];
    } else {
      odd_sum += array[i];
    }
  }
  return even_sum - odd_sum;
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  int diff= find_diff(array, size);

  printf("The difference between even and odd indexed elements is %d\n", diff);

  return 0;
}

