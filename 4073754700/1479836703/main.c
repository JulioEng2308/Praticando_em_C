#include <stdio.h>

int bissexto (int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
          return 1;
    }
  return 0;
}

int contabissexto (int ano) {
    int i = 1, total = 0;
    while (i < ano) {
        if (bissexto(i)) {
            total++;
        }
      i++;
    }
  return total;
}

int diadoano(int dia, int mes, int ano) {
    int diasnomes[12] = {31, 28,31,30,31,30,31,31,30,31,30,31};
    int soma = dia;
    int i = 0;

    if (bissexto(ano)) {
        diasnomes[1] = 29;
    }
    while (i < mes-1) {
        soma += diasnomes[i];
        i++;
    }
  return soma;
}
int epoca(int dia, int mes, int ano)
{
    int bissextos = contabissexto(ano);
    int diaano = diadoano(dia, mes, ano);
    int total = (ano - 1) * 365 + bissextos + diaano;
    return total -1;
}

int main(void)
{
  int dia, mes, ano;
  
  while (scanf("%d%d%d", &dia, &mes, &ano), ano != 0) {
    printf("%d\n", epoca(dia, mes, ano));
  }
}