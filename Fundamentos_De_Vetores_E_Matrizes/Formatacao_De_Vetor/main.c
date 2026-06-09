#include <stdio.h>

void imprime_vetor(int *vetor, int tam) {
  if (tam == 0) {
    printf("{}");
  } else {
    printf("{%d", vetor[0]);

    for (int i = 1; i < tam; i++) {
      printf(", %d", vetor[i]);
    }
    printf("}");
  }
}

int main (void) {
  int num;
  scanf("%d\n", &num);
  int vetor[num];
  
  for (int i = 0; i < num; i++) {
    scanf("%d", &vetor[i]);
  }

  imprime_vetor(vetor, num);

  return 0;
  
}
