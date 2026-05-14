#include <stdio.h>
// #include <string.h> não necessário neste exercício

int tamanhostr(const char *string)
{
  int i = 0;
  while (string[i] != '\0') {
      i++;
  }
  return i;
}

int main(void)
{
  char palavra[513];
  int tamanho;
  
  scanf("%512s", palavra);
  tamanho = tamanhostr(palavra);
    
  if (42 % tamanho == 0) {
      printf("%d divide 42", tamanho);
  } else {
      printf("%d nao divide 42", tamanho);
  }

  return 0;
}