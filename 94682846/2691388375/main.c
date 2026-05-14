#include <stdio.h> 
#include <stdlib.h>

void imprime_vetor (int *vet, int num) {
    for(int i = num - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
}
void leitura_vetor (int *vet, int N) {
    for(int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }
}

int* aloca_vetor (int N) {
    int *vet = malloc(N * sizeof(int));
    return vet;
}

int main (void) {
    int N;
    scanf("%d", &N);
    aloca_vetor(N);  
    int *vet = aloca_vetor(N);

    leitura_vetor(vet, N);
    imprime_vetor(vet, N);

    free(vet);
    return 0;
}