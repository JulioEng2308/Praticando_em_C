#include <stdio.h>

int main (void) {
  int num, primeiro, maior, menor;
  primeiro = 1;

  while (scanf("%d", &num), num != 0) {
    if (primeiro != 0) {
      menor = maior = num;
      primeiro = 0;
    }

    if (num > maior) {
        maior = num;
    } else if (num < menor) {
        menor = num;
    }
  }

  printf("%d %d", maior, menor);

  return 0;
}