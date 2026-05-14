#include <stdio.h>

int main () {
  int num_S, hora, min, seg;
  scanf("%d", &num_S);

  hora = num_S / 3600;
  min = (num_S % 3600) / 60;
  seg = num_S % 60;
  printf("%02d:%02d:%02d", hora, min, seg);
  return 0;
}