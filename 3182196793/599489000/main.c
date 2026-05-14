#include <stdio.h>   // printf e scanf
#include <ctype.h>   // isalpha e tolower
#include <assert.h>  // assert
#include <stdlib.h>  // malloc e realloc

char *getlinha(void)
{
  // Le uma string de tamanho desconhecido usando malloc e realloc ate
  // achar uma quebra de linha ('\n')
  int tamanho = 0;
  int capacidade = 64;
  char *str;
  int c;

  str = malloc(capacidade * sizeof(char));
  assert(str != NULL); // apenas para testes/Code Bench

  while (c = getchar(), c != '\n') {
    if(tamanho >= capacidade - 1) {
      capacidade *= 2;
      str = realloc(str,capacidade * sizeof(char));
      assert (str != NULL);
    }

    str[tamanho] = c;
    tamanho++;
  }

  // Nunca se esqueça do terminador...
  str[tamanho] = 0;

  return str;
}

int main(void)
{
  // Para leitura da linha com sua função auxiliar
  char *linha;
  linha = getlinha();

  int letras = 0;

    for (int i = 0; linha[i] != '\0'; i++) {
        if (isalpha(linha[i])) {
            letras++;
        }
    }

  char *palavra = malloc((letras + 1) * sizeof(char));
  assert(palavra != NULL);

  int j = 0;

  for (int i = 0; linha[i] != '\0'; i++) {
      if(isalpha(linha[i])) {
          palavra[j] = tolower(linha[i]);
          j++;
      }
  }
  palavra[j] = '\0';

  int esq = 0;
  int dir = letras - 1;
  int palindromo = 1;

  while (esq < dir) {
      if(palavra[esq] != palavra[dir]) {
          palindromo = 0;
          break;
      }
      esq++;
      dir--;
  }
  if(palindromo) {
      printf("palindromo\n");
  } else {
      printf("normal\n");
  }

  /* Resolva o problema do palíndromo aqui
   */



  // Não se esqueça de liberar memória depois de usar
  free(linha);
  free(palavra);
}