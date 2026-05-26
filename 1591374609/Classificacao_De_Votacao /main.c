#include <stdio.h>

int main (void) {
  int idade;

  scanf("%d", &idade);

  if (idade >= 0 && idade <= 15) {
      printf("Muito jovem");
  } else if (idade >= 16 && idade <= 17) {
      printf("Voto permitido");
  } else if (idade >= 18 && idade <= 59) {
      printf("Voto obrigatorio");
  } else if (idade < 0){
      printf("Erro");
  } else {
      printf("Nao precisa mais votar");
  }
  return 0;
}
