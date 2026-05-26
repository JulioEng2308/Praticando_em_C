#include <stdio.h>

int main (void) {
  int num;

  scanf("%d", &num);

  switch (num) {
    case 22:
    printf("SSH\n");
    break;
    case 80:
    printf("HTTP\n");
    break;
    case 443:
    printf("HTTPS\n");
    break;
    case 21:
    printf("FTP\n");
    break;
    default:
    printf("Desconhecido\n");
  }

  return 0;
}
