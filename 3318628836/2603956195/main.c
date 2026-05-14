#include <stdio.h>

void imprime_bin(int num) {
  
  
  if (num > 1) {
      imprime_bin(num / 2);
  }
  printf("%d", num % 2);
}

int main () {
    int num;
    scanf("%d", &num);
    imprime_bin(num);
    printf("\n");
    return 0;
}