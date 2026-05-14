#include <stdio.h>
#include <ctype.h>  // para usar tolower()

int conta_vogal(char vet[]) {
    int i = 0;
    int cont = 0;

    while (vet[i] != '\0') {
        char c = tolower(vet[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
        i++;
    }

  return cont;
}

int main () {
    char texto[101];

    fgets(texto, 101, stdin);

    int total = conta_vogal(texto);
    printf("%d", total);

    return 0;
}