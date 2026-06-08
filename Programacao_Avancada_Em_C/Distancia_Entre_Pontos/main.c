#include<stdio.h>
#include<math.h>

typedef struct ponto {
    float x,y;
} Ponto;

typedef struct circulo {
    Ponto c;
    float r;
} Circulo;

float comprimento (int n, Ponto *v) {
    float soma = 0.0;

    for (int i = 0; i < n - 1;i++) {
        float dx = v[i + 1].x - v[i].x;
        float dy = v[i + 1].y - v[i].y;
        soma += sqrt(dx * dx + dy * dy);
    }

    return soma;
}

int main () {
  int n;
  scanf("%d", &n);

  Ponto v[n];

  for(int i = 0; i < n; i++) {
      scanf("%f %f", &v[i].x, &v[i].y);
  }

  float resultado = comprimento(n, v);

  printf("%.2f\n", resultado);

  return 0;
}
