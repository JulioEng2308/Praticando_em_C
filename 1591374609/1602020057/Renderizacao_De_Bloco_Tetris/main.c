/* NAO ALTERE ESTA PARTE DO CODIGO
 */
#include <stdio.h>
#include <stdlib.h>
int codebench_exercicio_erro(void)
{
	puts("Erro! A funcao printf nao deve ser usada neste exercicio!");
	puts("Use a funcao `putchar()' para imprimir cada caracter.");
	puts("Exemplo: putchar('#'); imprime uma veze o caracter #");
	exit(EXIT_FAILURE);
}
#define printf(...) codebench_exercicio_erro()
#define puts(...) codebench_exercicio_erro()
/* NAO ALTERE O CODIGO ACIMA
 */


int main(void)
{
	int y, x;
    scanf("%d %d", &x, &y);

    int linha_tabuleiro = 20;
    int coluna_tabuleiro = 10;

    int i, j;

    putchar('+');

    for(i = 1; i <= coluna_tabuleiro; i++) {
        putchar('-');
    }
    putchar('+');
    putchar('\n');

    for (j = 1; j <=linha_tabuleiro; j++) {
        putchar('|');
        for(i = 1; i <= coluna_tabuleiro; i++) {
            int linha_ok = (i == y) || (i == y + 1);
            int coluna_ok = (j == x) || (j == x + 1);

            if(linha_ok && coluna_ok) {
                putchar('#');
            } else {
                putchar('.');
            }
        }
      putchar('|');
      putchar('\n');
    }
  putchar('+');

  for(i = 1; i <= coluna_tabuleiro; i++) {
      putchar('-');
  }
  putchar('+');
  putchar('\n');
  return 0;
}
