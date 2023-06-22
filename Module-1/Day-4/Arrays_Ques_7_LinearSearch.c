
#include <stdio.h>

int linear(int *arr, int n, int val) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == val) {
      return i;
    }
  }
  return -1;
}

int main() {
  int sz;
  printf("Enter the size of the array: ");
  scanf("%d", &sz);

  int ar[sz];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < sz; i++) {
    scanf("%d", &ar[i]);
  }

  int val;
  printf("Enter the value to search for: ");
  scanf("%d", &val);

  int idx = linear(ar, sz, val);
  if (idx == -1) {
    printf("The value %d was not found in the array.\n", val);
  } else {
    printf("The value %d was found at index %d.\n", val, idx);
  }

  return 0;
}
