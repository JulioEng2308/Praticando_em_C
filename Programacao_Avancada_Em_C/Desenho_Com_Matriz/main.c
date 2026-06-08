#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    int linhas = 3 * N + 2;
    int colunas = 3 * N + 4;
    char matriz[linhas][colunas];
  
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {

          if (i == 0 || i == linhas - 1) {
              matriz[i][j] = '-';
          } else if (j == 0 || j == colunas - 1 || j == N + 1 || j == 2 * N + 2) {
              matriz[i][j] = '|';
          } else if (j <= N || j > 2 * N + 2 ) {
              matriz[i][j] = '#';
          } else {
              matriz[i][j] = '.';
          } 
        }
      }
     for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
     }
    return 0;
}
