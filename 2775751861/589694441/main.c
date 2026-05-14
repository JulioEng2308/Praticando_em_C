#include <stdio.h>

void imprime_vetor(int *vetor, int tam){
    if(tam == 0) {
        printf("{}");
    } else {
        printf("{%d", vetor[0]);  
        
        for (int i = 1; i < tam;i++) {
          printf(", %d", vetor[i]);
      }
      printf("}\n");
    }  
}
int main (void) {
    int num;
    scanf("%d", &num);
    int vet[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &vet[i]);
    }

    imprime_vetor(vet, num);
    
}