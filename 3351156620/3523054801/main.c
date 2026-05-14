#include <stdio.h>
#include <string.h>
#include <ctype.h>
int sim_palindromo(char vet[]) {
    int i = 0;
    int j = strlen(vet) - 1;

    while (i < j) {
        char a = tolower(vet[i]);
        char b = tolower(vet[j]);

        if (a != b) {
            return 0;
        }
        i++;
        j--;
    }

  return 1;
}

int main () {
    char palavra[101];

    scanf("%100s", palavra);

    if (sim_palindromo(palavra)) {
        printf("palindromo\n");
    } else {
        printf("normal\n");
    }
return 0;
}