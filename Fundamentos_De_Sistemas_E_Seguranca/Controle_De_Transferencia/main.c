#include <stdio.h>

int main (void) {
  int vol;

  scanf("%d", &vol);

  if(vol < 100) {
    printf("Normal\n");
  } else if (vol >= 100 && vol <= 500) {
    printf("Suspeito\n");
  } else {
    printf("Alerta de Exfiltracao\n");
  }

  return 0;
}
