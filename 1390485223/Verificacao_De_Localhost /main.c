#include <stdio.h>

int main (void) {
  int num;

  scanf("%d", &num);

  if(num == 127) {
    printf("Loopback/Localhost\n");
  } else {
    printf("IP Externo\n");
  }

  return 0;
}
