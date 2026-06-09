#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num_vetores;
  int tam_vetor;
  int **vetores;
  
  scanf("%d%d", &num_vetores, &tam_vetor);

  // Aloca um vetor de ponteiros
  vetores = malloc(num_vetores * sizeof (int*));

  // Continue...

  for (int i = 0; i < num_vetores; i++) {
      vetores[i] = malloc(tam_vetor * sizeof(int));
  }
  for (int i = 0; i < num_vetores; i++) {
      for(int j = 0; j < tam_vetor; j++) {
          scanf("%d", &vetores[i][j]);
      }
  }
  for (int i = num_vetores - 1; i >= 0; i--) {
      printf("v%d: ", i);
      for(int j = 0; j < tam_vetor; j++) {
          printf("%d ", vetores[i][j]);
      }
      printf("\n");
  }
  for (int i = 0; i < num_vetores;i++) {
      free(vetores[i]);
    }
  free(vetores);
  return 0;
}
