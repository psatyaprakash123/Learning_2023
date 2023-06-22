#include <stdio.h>

int sum_array(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum;
}

float average_array(int *array, int size) {
  int sum = sum_array(array, size);
  float average = (float)sum / size;
  return average;
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

  int sum = sum_array(array, size);
  float average = average_array(array, size);

  printf("The sum of the array is %d\n", sum);
  printf("The average of the array is %.2f\n", average);

  return 0;
}

