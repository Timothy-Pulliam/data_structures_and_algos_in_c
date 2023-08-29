#include <stdio.h>

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int main(void) {

  int x = 1;
  int y = 2;
  printf("x = %i\n", x);
  printf("y = %i\n", y);

  swap(&x, &y);
  printf("x = %i\n", x);
  printf("y = %i\n", y);
  return 0;
}