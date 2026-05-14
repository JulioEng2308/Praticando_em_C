#include <stdio.h>
#include <math.h>

int main () {
  double a, b, c,epsilon;
  double x, y;

  scanf("%lf %lf %lf %lf", &a, &b, &epsilon, &c);

  x = a + b;
  y = c;
  
  if (fabs(x - y) < epsilon) {
      printf("iguais\n");
  } else {
      printf("diferentes\n");
  }

return 0;
}