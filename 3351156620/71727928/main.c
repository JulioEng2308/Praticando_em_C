#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *getlinha (void) {
    int tam = 0;
    int cap = 64;
    char *word;
    int c;

    word = malloc(cap * sizeof(char));

    if (word == NULL) {
        return NULL;
    }

    while ((c = getchar()) != '\n' && c != EOF) {
        if(tam >= cap - 1) {
            cap *= 2;
            word = realloc(word, cap * sizeof(char));
            if (word == NULL) {
                return NULL;
            }
        }
        word[tam] = c;
        tam++;
    }
    if (tam == 0 && c == EOF) {
        free(word);
        return NULL;
    }

    word[tam] = '\0';
    return word;
}

int main (void) {
  int cap = 16;
  int palavra = 0;
  char **frases = malloc(cap * sizeof(char*));

  if(frases == NULL) {
      return 1;
  }
  while (1) {
      char *linha = getlinha();

      if (linha == NULL) {
          break;
      }

      if(strcmp(linha, "Fim!") == 0) {
          free(linha);
          break;
      }

      if(palavra >= cap) {
          cap *= 2;
          char **frase2 = realloc(frases,cap * sizeof(char*));

          if(frase2 == NULL) {
              for(int i = 0; i < palavra;i++) {
                free(frases[i]);
              }
            free(frases);
            return 1;
          }
        frases = frase2;
      }
      frases[palavra] = linha;
      palavra++;
  }

  for(int i = palavra - 1; i >= 0; i--) {
      printf("%s\n", frases[i]);
  }
  for(int i = 0; i < palavra; i++) {
      free(frases[i]);
  }
  free(frases);
  return 0;
}