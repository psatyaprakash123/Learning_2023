#include <stdio.h>

void reverse_array(int *array, int size) {
  int i = 0;
  int j = size - 1;
  while (i < j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    i++;
    j--;
  }
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

  reverse_array(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
