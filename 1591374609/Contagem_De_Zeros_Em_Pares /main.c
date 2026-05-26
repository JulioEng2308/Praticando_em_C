#include <stdio.h>

int main () {
  int num1, num2, quantzero;

  quantzero = 0;
  while (scanf ("%d %d", &num1, &num2), num1 != 0 || num2 != 0) {
      if (num1 == 0) {
          quantzero++;
      } else if (num2 == 0) {
          quantzero++;
      }
  }

  quantzero += 2;
  printf("%d\n", quantzero);
  return 0;
}
