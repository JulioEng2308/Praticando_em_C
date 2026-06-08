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

int total_bissexto (int ano) {
    int cont = 0, i;
    for (i = 1; i < ano; i++) {
        if(bissexto(i) == 1) {
            cont = cont + 1;
        }
    }

    return cont;
}

int main () {
    int ano;

    scanf("%d", &ano);
    printf("%d\n", total_bissexto(ano));
    return 0;
}
