#include <stdio.h>

int main (void) {
  int hora;
  int min;
  int S,seg;

  scanf("%d", &S);

  hora = S / 3600;
  min = (S % 3600) / 60;
  seg = S % 60;

  printf("%02d:%02d:%02d", hora, min, seg);
}
