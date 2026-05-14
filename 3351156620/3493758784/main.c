#include <stdio.h>
#include <string.h>

#define N "Norte"
#define L "Leste"
#define S "Sul"
#define O "Oeste"

int main(void)
{
  char direcao[10];
  int x  = 0, y = 0;
  int passos = 0;

  while (scanf("%s", direcao) != EOF) {
      passos++;

      if (strcmp(direcao, "Norte") == 0) {
          y++;
      } else if (strcmp(direcao, "Sul") == 0) {
          y--;
      } else if (strcmp(direcao, "Leste") == 0) {
          x++;
      } else if (strcmp(direcao, "Oeste") == 0) {
          x--;
      }

      if (x == 0 && y == 0) {
          printf("%d passos\n", passos);
          return 0;
      }
  }
  return 0;
}