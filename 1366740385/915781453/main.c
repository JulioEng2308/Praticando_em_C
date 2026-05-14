#include <stdio.h>

int main (void) {
  int hora1, hora2;
  int min1, min2;
  int seg1, seg2;
  int diferenca;

  scanf("%02d:%02d:%02d", &hora1, &min1, &seg1);
  scanf("%02d:%02d:%02d", &hora2, &min2, &seg2);

  seg1 = seg1 + (min1 * 60) + (hora1 * 3600);
  seg2 = seg2 + (min2 * 60) + (hora2 * 3600);

  diferenca = seg2 - seg1;

  printf("%d\n", diferenca);
}