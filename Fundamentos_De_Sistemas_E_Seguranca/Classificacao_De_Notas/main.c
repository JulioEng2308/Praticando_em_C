#include <stdio.h>

int main (void) {
  float nota;

  scanf("%f", &nota);

  if(nota > 0.0 && nota <= 3.9) {
    printf("Baixa\n");
  } else if (nota >= 4.0 && nota <= 6.9) {
    printf("Media\n");
  } else if (nota >= 7.0 && nota <= 8.9) {
    printf("Alta\n");
  } else if (nota >= 9.0 && nota == 10.0) {
    printf("Critica\n");
  }

  return 0;
}
