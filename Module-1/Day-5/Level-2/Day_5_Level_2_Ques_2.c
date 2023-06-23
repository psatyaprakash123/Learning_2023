#include <stdio.h>
#include <math.h>

int main() {
  int x1, y1, x2, y2;
  double dis;

  printf("Enter the coordinates of point 1: ");
  scanf("%d %d", &x1, &y1);
  printf("Enter the coordinates of point 2: ");
  scanf("%d %d", &x2, &y2);

  dis= sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

  printf("The distance between the two points is: %.2f\n", dis);

  return 0;
}

