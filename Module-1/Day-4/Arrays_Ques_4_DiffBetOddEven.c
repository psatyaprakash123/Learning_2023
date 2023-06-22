#include <stdio.h>

int find_diff(int *arr, int sz) {
  int even = 0;
  int odd = 0;
  for (int i = 0; i < sz; i++) {
    if (arr[i] % 2 == 0) {
      even += arr[i];
    } else {
      odd += arr[i];
    }
  }
  return even - odd;
}

int main() {
  int sz;
  printf("Enter the size of the array: ");
  scanf("%d", &sz);

  int arr[sz];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < sz; i++) {
    scanf("%d", &arr[i]);
  }

  int diff = find_diff(arr, sz);

  printf("The difference between even and odd elements is %d\n", diff);

  return 0;
}

