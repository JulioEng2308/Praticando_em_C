#include <stdio.h>
#include <math.h>

double raiz (double x, double x0, double epsilon) {
    double calculo;
    calculo = (x0 * x0 + x) / (2.0 * x0);
    if (fabs(x - x0 * x0) <= epsilon) {
        return x0;
      
    } else {
       return raiz(x,calculo, epsilon);
    }
      
    
}

int main () {
    int num;
    double x, x0, epsilon, resultado;
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        scanf("%lf %lf %lf", &x, &x0, &epsilon);
        resultado = raiz(x,x0,epsilon);
        printf("%.5lf\n", resultado);
    }
  return 0;
}
