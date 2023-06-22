#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compute(char *timestr) {
  int h, m, s;
  char *token;

  token = strtok(timestr, ":");
  h = strtoul(token, NULL, 10);

  token = strtok(NULL, ":");
  m = strtoul(token, NULL, 10);

  token = strtok(NULL, ":");
  s = strtoul(token, NULL, 10);

  return h * 3600 + m * 60 + s;
}

int main() {
  char timestr[100];
  printf("Enter string in format hh:mm:ss : ");
  scanf("%s", timestr);

  int total= compute(timestr);

  printf("The total number of seconds : %d\n", total);

  return 0;
}

