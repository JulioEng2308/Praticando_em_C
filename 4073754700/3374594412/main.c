#include <stdio.h>

// Acrescente as funções auxiliares que forem necessárias.

int diasdomes(int mes, int ano)
{
  // Troque pela sua resolução
  switch(mes) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
            return 29;
        } else {
            return 28;
        }
  }
  return 0;
}

int main(void)
{
  int mes, ano;
  
  while (scanf("%d%d", &mes, &ano), ano != 0) {
    printf("%02d/%d tem %d dias\n", mes, ano, diasdomes(mes, ano));
  }
}