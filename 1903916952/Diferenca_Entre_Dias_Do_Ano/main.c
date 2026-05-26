#include <stdio.h>

int diadoano (int dia, int mes, int ano) {
    int diames[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    int i = 0;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        diames[1] = 29;
    }

    while (i < mes - 1) {
        total += diames[i];
        i++;
    }

  total += dia;
  return total;
}

int main () {
    int d1, m1, a1;
    int d2, m2, a2;
    int dia1, dia2, diferenca;

    scanf("%d %d %d", &d1, &m1, &a1);
    scanf("%d %d %d", &d2, &m2, &a2);

    dia1 = diadoano(d1, m1, a1);
    dia2 = diadoano(d2, m2, a2);

    diferenca = dia2 - dia1;

    printf("%d\n",diferenca);

    return 0;
}
