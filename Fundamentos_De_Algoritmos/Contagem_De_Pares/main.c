#include <stdio.h>

int main () {
  int num1, num2, quant;

  quant = 0;
  
  while(scanf("%d %d", &num1, &num2), num1 != 0 && num2 != 0) {
      if (num1 != 0 && num2 != 0) {
          quant += 2;
      }
  }
  quant += 2;
  
  printf("%d\n", quant);
  return 0;
}
