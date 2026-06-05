#include <stdio.h>

int conta_collatz(int num) {
  int calculo1, calculo2;

  if (num == 1) {
      return 1;
  }

      if (num % 2 == 0) {
          calculo1 = num / 2;
          return 1 + conta_collatz(calculo1);
      } else {
          calculo2 = 3 * num + 1;
          return 1 + conta_collatz(calculo2);
      }
  
}
int main(void) {
  int num;
  scanf("%d", &num);
  printf("%d\n", conta_collatz(num));
  return 0;
}
