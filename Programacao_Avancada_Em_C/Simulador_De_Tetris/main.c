#include <stdio.h>


int procurar_linha (char tabuleiro[22][13], int xn_inicio) {
    int yn = 1;

    while (1) {
        int y_colisao = yn + 2;
        if(tabuleiro[y_colisao][0] == '+') {
            break;
        }
        if(tabuleiro[y_colisao][xn_inicio]== '#' || tabuleiro[y_colisao][xn_inicio+1] == '#') {
            break;
        }
      yn++;

      if(yn > 20) {
          yn = 20;
          break;
      }
    }
    return yn;
}

int main(void)
{
  const int lborda = 22;
  const int ltabuleiro = 20;
  // Uma matriz de caracteres ou um vetor de strings contendo o tabuleiro inicialmente vazio.
  // Observe que ela possui 22 linhas e 13 colunas. Isso é porque o tabuleiro do Tetris
  // possui 22 linhas e 12 colunas. A estrutura de dados requer uma coluna a mais para que
  // cada linha da matriz funcione como uma string (contém o byte 0 no final).
  char tabuleiro[22][13] = {
      "+----------+",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "+----------+",
  };

    int xn_inicio;
  
    while (scanf("%d", &xn_inicio) == 1 && xn_inicio != 0) {
        int yn_final = procurar_linha(tabuleiro, xn_inicio);

        if(yn_final <= ltabuleiro) {
            tabuleiro[yn_final][xn_inicio] = '#';
            tabuleiro[yn_final][xn_inicio + 1] = '#';
            tabuleiro[yn_final + 1][xn_inicio] = '#';
            tabuleiro[yn_final + 1][xn_inicio + 1] = '#';
        }
    }
    for (int i = 0; i < lborda;i++) {
        printf("%s\n", tabuleiro[i]);
    }
    return 0;
}
