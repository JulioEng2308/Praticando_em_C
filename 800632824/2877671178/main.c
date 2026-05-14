#include <stdio.h>

int main () {
  int hora, min, seg, cal1, cal2, cal3, calfinal;
  scanf("%d:%d:%d", &hora, &min, &seg);

  if (hora >= 0 && hora < 24) {
      cal1 = 3600 * hora;
      
  } 
  if (min >= 0 && min <= 60) {
      cal2 = 60 * min;
      
  }
  if (seg >= 0 && seg <=60) {
      cal3 = 1 * seg;
      
  }
  calfinal = cal1 + cal2 + cal3;
  printf("%d\n", calfinal);
  return 0;
}