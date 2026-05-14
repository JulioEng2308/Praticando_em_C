#include <stdio.h>

int main (void) {
  double num1, num2, result;
  char op;

  scanf("%lf %c %lf",&num1 ,&op , &num2);

  switch (op) {
    case '+':
      result = num1 + num2;
      printf("%.2lf\n", result);
    break;
    case '-':
      result = num1 - num2;
      printf("%.2lf\n", result);
    break;
    case '*':
      result = num1 * num2;
      printf("%.2lf\n", result);
    break;
    case '/':
      result = num1 / num2;
      printf("%.2lf\n", result);
    break;
  }

  return 0;
}