#include <stdio.h>

int bissexto(int ano) {
  if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
    return 1;
  }
  return 0;
}

int dia_mes(int mes, int ano) {
  switch (mes) {
    case 1: return 31;
    case 2:
      if (bissexto(ano)) {
        return 29;
      }
      return 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 0;
    
  }
}

int bissexto_antes (int ano) {
  int antes = ano - 1;
  return (antes / 4) - (antes / 100) + (antes / 400);
}

int main (void) {
  int dia, mes, ano;

  scanf("%d/%d/%d", &dia, &mes, &ano);

  int totaldias = 0;
  totaldias += (ano - 1)*365;
  totaldias += bissexto_antes(ano);

  for (int i = 1; i < mes; i++) {
    totaldias += dia_mes(i, ano);
  }

  totaldias += (dia - 1);
  int resto = totaldias % 7;

  switch (resto) {
    case 0: printf("Segunda\n"); break;
    case 1: printf("Terca\n"); break;
    case 2: printf("Quarta\n"); break;
    case 3: printf("Quinta\n"); break;
    case 4: printf("Sexta\n"); break;
    case 5: printf("Sabado\n"); break;
    case 6: printf("Domingo\n"); break;
  }

  return 0;
}