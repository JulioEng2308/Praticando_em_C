#include <stdio.h>

int main (void) {
  int num;

  scanf("%d", &num);

  switch (num) {
    case 1:
      printf("Usuário\n");
      break;
    case 2:
      printf("Moderador\n");
      break;
    case 3:
      printf("Administrador\n");
      break;
    default:
      printf("Acesso Negado\n");
  }

  return 0;
}
