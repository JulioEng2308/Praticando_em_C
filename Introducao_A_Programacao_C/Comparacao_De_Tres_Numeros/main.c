#include <stdio.h>

int main (void) {
  int num1, num2, num3, menor;

  scanf("%d\n", &num1);
  scanf("%d\n", &num2);
  scanf("%d", &num3);
 
  menor = num1;

  if(num1 > num2) {
    menor = num2;
  } 
  if(num1 > num3) {
    menor = num3;
  }
  printf("%d\n", menor);

  return 0;
}
