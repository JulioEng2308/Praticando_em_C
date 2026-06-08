#include <stdio.h>

int main () {
  double num_1, num_2, soma, sub, multi, divi;
  char op;

  scanf("%lf %c %lf", &num_1, &op, &num_2);

  switch (op) {
    case '+':
        soma = num_1 + num_2;
        printf("%.2lf", soma);
        break;
    case '-':
        sub = num_1 - num_2;
        printf("%.2lf", sub);
        break;
    case '*':
        multi = num_1 * num_2;
        printf("%.2lf", multi);
        break;
    case '/':
        divi = num_1 / num_2;
        printf("%.2lf", divi);
        break;
  }
  return 0;
}
