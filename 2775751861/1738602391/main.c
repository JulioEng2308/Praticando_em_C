#include <stdio.h>

#define VAZIO 0
#define MOEDA 1
#define ZUMBI 5

int main(void)
{
  int N, M;
  int jogo = 1;

  while(1) {
      scanf("%d %d", &N, &M);

      if (N == 0 && M == 0) {
          return 0;
      }

      int maps[25][25];

      for(int i = 0; i < N; i++) {
          for (int j = 0; j < M; j++) {
              scanf("%d", &maps[i][j]);
          }
      }

      char movimento[205];
      scanf("%s", movimento);

      int x = 0, y = 0;
      int vida = 42;
      int coin = 0;
      
      for (int indice = 0; movimento[indice] != '\0'; indice++) {
          if (vida > 0) {
             int vari_x = x;
             int vari_y = y;
              if (movimento[indice] == 'W') {
                  vari_x--;
              } else if (movimento[indice] == 'S') {
                  vari_x++;
              } else if (movimento[indice] == 'A') {
                  vari_y--;
              } else if (movimento[indice] == 'D') {
                  vari_y++;
             }

          int la_ele = 1;

          if (vari_x < 0 || vari_x >= N) {
              la_ele = 0;
            } else if (vari_y < 0 || vari_y >= M) {
              la_ele = 0;
            }

          if (la_ele == 1) {
              x = vari_x;
              y = vari_y;
                if (maps[x][y] == ZUMBI) {
                    vida -= 5;
                    if(vida < 0) {
                        vida = 0;
                    }
                } else if (maps[x][y] == MOEDA) {
                    coin++;
                    maps[x][y] = VAZIO;
                }
            }
          }
      } 
    printf("Jogo %d\n", jogo);
    printf("pos: %d, %d\n", x, y);
    printf("moedas: %d\n", coin);
    printf("vida: %d\n\n", vida);

    jogo++;
  }
  return 0;
}