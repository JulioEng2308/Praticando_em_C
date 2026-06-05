#include <stdio.h>
// #include <string.h>  (não será necessario neste exercício)

int main(void)
{
  char nome[21];
  char sobrenome[21];

  scanf("%20s %20s", nome, sobrenome);
  printf("Seja bem-vind@, %c. %s!", nome[0], sobrenome);

  return 0;
}
