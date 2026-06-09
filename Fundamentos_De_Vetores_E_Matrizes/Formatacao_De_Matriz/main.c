#include <stdio.h>


/* A função deverá receber um vetor e o seu número de elementos. Ela deverá
 * imprimir os elementos do vetor em notação C, usando chaves e vírgulas
 * adequadamente. Exemplos:
 *    Um vetor com tam=0   {}
 *    Um vetor com tam=1   {42}
 *    Um vetor com tam=2   {3, 14}
 *    Um vetor com tam=3   {1, 2, 3}
 * Não imprima \n nesta função.
 */ 
void imprime_vetor(int *vet, int tam)
{
  if (tam == 0) {
    printf("{}");
  } else {
    printf("{%d", vet[0]);

    for (int i = 1; i < tam; i++) {
      printf(", %d", vet[i]);
    }
    printf("}");
  }
}


/* A funçaão deverá receber uma matriz e suas dimensões. Ela deverá imprimir a
 * matriz em notação C, usando a função imprime_vetor() para fazer a impressão
 * de cada uma das linhas da matriz. Acrescente vírgulas e quebras-de-linha nos
 * locais corretos.
 *
 * Exemplo de uma matriz com duas linhas e três colunas:
 *
 *      {{1, 2, 3},
 *      {4, 5, 6}}
 */
void imprime_matriz(int altura, int largura, int matriz[][largura])
{
  if ((altura != 0) && (largura != 0)) {
      printf("{");
      for (int i = 0; i < altura; i++) {
          imprime_vetor(matriz[i], largura);
          if (i < altura - 1) {
            printf(",\n");
          }
      }
      printf("}");
    } else {
      printf("{}");
    }
}


int main(void)
{
	int altura, largura;
	scanf("%d%d", &altura, &largura);

	int matriz[altura][largura];

    for (int i = 0; i < altura; i++) {
      for (int j = 0; j < largura; j++) {
        scanf("%d", &matriz[i][j]);
      }
    }

  imprime_matriz(altura, largura, matriz);


  
}
