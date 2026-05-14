#include <stdio.h>

void imprime_vet(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d", vet[i]);
    }
}

int busca_chave(int vet[], int tam, int chave) {
    for (int i = 0; i < tam; i++) {
        if (vet[i] == chave) {
            return i;
        }
     }
  return -1;
}

int main (void) {
  int N;
  scanf("%d", &N);
  int vet[N];
  int chave;
  int chave_valid = 1;
  
  for (int i = 0; i < N; i++) {
      scanf("%d", &vet[i]);
  }

  while (chave_valid == 1) {
      chave_valid = scanf("%d", &chave);
      
      if (chave_valid == 1) {
          int proximo = busca_chave(vet, N, chave);
          if (proximo == -1) {
            printf("%d: nao encontrada", chave);
            printf("\n");
          } else {
            printf("%d: posicao %d\n", chave, proximo);
          }
      } 
  }
  return 0;
}