#include <stdio.h>

int bissexto (int ano) {
    if (ano % 400 == 0) {
        return 1;
    }
    if (ano % 100 == 0) {
        return 0;
    }
    if (ano % 4 == 0) {
        return 1;
    }
  return 0;
}

int main () {
    int ano;

    scanf("%d", &ano);

    if(bissexto(ano) == 1) {
        printf("bissexto\n");
    } else {
        printf("comum\n");
    }
}