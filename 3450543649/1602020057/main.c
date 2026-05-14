#include <stdio.h>

int main (void) {
  int idade;

  scanf("%d", &idade);

  if (idade >= 0 && idade <= 15) {
    printf("Muito jovem\n");
  } else if (idade >= 16 && idade <= 17) {
    printf("Voto permitido\n");
  } else if (idade >= 18 && idade <= 59) {
    printf("Voto obrigatorio\n");
  } else if (idade > 59) {
    printf("Nao precisa mais votar\n");
  }

  return 0;
}