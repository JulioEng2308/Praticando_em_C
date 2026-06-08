#include <stdio.h>
double media_ponderada (double *valor, double *pesos, int tam, int i) {
   if (i == tam) {
       return 0;
   } 
  return (valor[i] * pesos[i] + media_ponderada(valor, pesos, tam, i + 1));
   
}

double soma_pesos (double *pesos, int N, int i) {
    if (i == N) {
        return 0;
    } 
   return (pesos[i] + soma_pesos(pesos, N, i + 1));
    
}

int main () {
    int N;
    scanf("%d", &N);
    //int vet[N];
    double valor[N];
    double pesos[N];
    double *pont1 = valor;
    double *pont2 = pesos;
    double result;
    for (int i = 0; i < N; i++) {
        scanf("%lf", &valor[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%lf", &pesos[i]);
    }

    double soma_ponderada = media_ponderada (pont1, pont2, N, 0);
    double soma_peso = soma_pesos(pont2, N, 0);
    result = soma_ponderada / soma_peso;

    printf("%.2lf\n", result);
  return 0;
}
