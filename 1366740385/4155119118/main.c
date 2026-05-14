#include <stdio.h>

int main (void) {
  int num1, num2, num3, menor, maior, diferenca;

  scanf("%d\n", &num1);
  scanf("%d\n", &num2);
  scanf("%d", &num3);

  maior = num1;
  menor = num1;

  if(menor > num2) {
    menor = num2;
  }
  if(menor > num3) {
    menor = num3; 
  }

  if(num2 > maior) {
    maior = num2;
  }
  if(num3 > maior) {
    maior = num3;
  }
  diferenca = maior - menor;
  printf("%d\n", diferenca);

  return 0;
}