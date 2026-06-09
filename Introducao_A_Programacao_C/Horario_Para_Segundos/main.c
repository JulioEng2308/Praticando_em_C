#include <stdio.h>

int main (void) {
  int hora;
  int min;
  int seg;

  scanf("%d:%d:%d", &hora, &min, &seg);

  seg = seg + (min * 60) + (hora * 3600);

  printf("%d\n", seg);

  return 0;
}
