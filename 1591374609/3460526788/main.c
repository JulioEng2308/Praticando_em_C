#include <stdio.h>

int main (void) {
  int num_n, first, maior, menor;

  first = 1;
  
  while (scanf("%d", &num_n), num_n != 0) {
    if (first != 0) {
        menor = maior = num_n;
        first = 0;
    }
      
    if (num_n > maior) {
        maior = num_n;
    } else if (num_n < menor) {
        menor = num_n;
    }    
  }
  printf("%d %d",maior, menor);
}