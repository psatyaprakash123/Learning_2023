#include <stdio.h>

int find_min(int *array, int size) {
  int min = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int find_max(int *array, int size) {
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
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

  int min = find_min(array, size);
  int max = find_max(array, size);

  printf("The minimum element is %d\n", min);
  printf("The maximum element is %d\n", max);

  return 0;
}
