#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void) {
    char frase[101];
    char limpa[101];
    int i = 0, j = 0;

    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
          if(isalpha(frase[i])) {
            limpa[j++] = tolower(frase[i]);
          }
    }
  limpa[j] = '\0';

    int inicio = 0;
    int fim = j - 1;
    int palindromo = 1;

    while (inicio < fim) {
        if (limpa[inicio] != limpa[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo) {
        printf("palindromo\n");
    } else {
        printf("normal\n");
    }
  return 0;
}