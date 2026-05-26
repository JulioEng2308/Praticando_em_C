#include <stdio.h>

int bissexto (int ano) {
    if (ano % 400 == 0 ) {
        return 1;
    }
    if (ano % 100 == 0) {
        return 0;
    }
    if (ano % 4 == 0) {
        return 1;
    }

  return 0;
}

int diames(int mes, int ano) {
    int dias;
    if (mes == 2) {
        if (bissexto(ano) == 1) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

  return dias;
}

int diasinicio(int dia,int mes, int ano) {
    int total = 0;
    int i =1, j =1; 

  while (i < ano) {
      if (bissexto(i)) {
        total = total + 366;
      } else {
        total = total + 365;
      }
    i++;
  }

 

  while (j < mes) {
      total = total + diames(j, ano);
      j++;
  }

  total += dia - 1;
  return total;
}


int main (void) {
    int dia, mes, ano;
    int total_dias, resto;
    const char *dias_semana[7] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

    scanf("%d/%d/%d", &dia, &mes, &ano);

    total_dias = diasinicio(dia, mes, ano);
    resto = total_dias % 7;

    printf("%s\n", dias_semana[resto]);

    return 0;

    
}
