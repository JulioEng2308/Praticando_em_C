#include <stdio.h>

int main () {
  int hora1, min1, seg1, hora2, min2, seg2, difer;
  int cal1, cal2;
  scanf("%d:%d:%d", &hora1, &min1, &seg1);
  scanf("%d:%d:%d", &hora2, &min2, &seg2);

  cal1 = hora1 * 3600 + min1 * 60 + seg1;
  cal2 = hora2 * 3600 + min2 * 60 + seg2;

  if (cal1 > cal2) {
      difer = cal1 - cal2;
  } else {
      difer = cal2 - cal1;
  }
  printf("%d\n", difer);
  return 0;
  
}