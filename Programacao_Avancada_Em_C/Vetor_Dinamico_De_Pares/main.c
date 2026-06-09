#include <stdio.h>
#include <stdlib.h>

int *pares(int *vetor, int tam, int *num_pares) {
    int j = 0;

    *num_pares = 0;

    for(int i = 0; i < tam; i++) {
        if(vetor[i] % 2 == 0) {
            (*num_pares)++;
        }
    }

    if(*num_pares == 0) {
        return NULL;
    }

    int *v_pares = (int *)malloc(*num_pares * sizeof(int));
    if (v_pares == NULL) {
        return NULL;
    }

    for (int i = 0; i < tam; i++) {
        if (vetor[i] % 2 == 0) {
            v_pares[j] = vetor[i];
            j++;
        }
    }
    return v_pares;
}

int main () {
    int N;
    int num_pares;
    scanf("%d", &N);
    int *vetor = (int *)malloc(N * sizeof(int));

    for(int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int *v_pares = pares(vetor, N, &num_pares);
    
    printf("pares:");
    if(v_pares != NULL) {
        for(int i = 0; i < num_pares;i++) {
            printf(" %d", v_pares[i]);
        }
    } else {
        printf(" nenhum");
    }
    printf("\n");

    printf("vetor original:");
    for(int i = 0; i < N;i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");

    free(vetor);
    free(v_pares);

    return 0;
    
}
