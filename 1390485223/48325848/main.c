#include <stdio.h>

int main (void) {
  int ip, login;
  float hora_acesso;

  scanf("%d", &ip);
  scanf("%f", &hora_acesso);
  scanf("%d", &login);

  if(ip == 1 && login > 3) {
    printf("REQUER_2FA\n");
  } else if (ip == 2 && (hora_acesso < 8 || hora_acesso > 18)) {
    printf("BLOQUEADO\n");
  } else if (ip == 2 && (hora_acesso >= 8 && hora_acesso <= 18)){
    printf("REQUER_2FA\n");
  } else if (ip == 1 && login <= 3) {
    printf("ACESSO_LIBERADO\n");
  } else {
    printf("ERRO_ SISTEMA\n");
  }

  return 0;
}