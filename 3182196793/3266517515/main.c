#include <stdio.h>
#include <string.h>
#include <ctype.h>

void para_maisculo(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

int main () {
    int N;
    scanf("%d", &N);

    char dicionario[N][6];
    for(int i = 0; i < N; i++) {
      scanf("%s", dicionario[i]);
    }

    int M;
    scanf("%d", &M);

    char consulta[6];
    for(int i = 0; i < M; i++) {
        scanf("%s", consulta);

        para_maisculo(consulta);
        int existe = 0;

        for (int j = 0; j < N; j++) {
            if (strcmp(consulta, dicionario[j]) == 0) {
              existe = 1;
            }
        }
        if (existe) {
            printf("%s ok\n", consulta);
        } else {
            printf("%s nao existe\n", consulta);
        }
    }
    return 0;
}