#include <stdio.h>

void imprimir (int v[], int n) {
    printf("{");

    for (int i = 0; i < n;i++) {
        printf("%d", v[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main () {
    int n;
    scanf("%d", &n);
    int v[n];

    for(int i = 0; i < n;i++) {
        scanf("%d", &v[i]);
    }

    imprimir (v, n);

    for(int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > chave) {
            if ( v[j + 1] != v[j]) {
                v[j+1] = v[j];
                imprimir (v, n);
            }
          j--;
        }

        if (v[j+1] != chave) {
            v[j+1] = chave;
            imprimir(v, n);
        }
    }

  return 0;
}
