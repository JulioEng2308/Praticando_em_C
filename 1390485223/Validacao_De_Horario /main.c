#include <stdio.h>

int main (void) {
  int hora;

  scanf("%d", &hora);

  if (hora >= 8 && hora <= 18) {
      printf("Permitido\n");
  } else {
      printf("Negado\n");
  }

  return 0;
}
