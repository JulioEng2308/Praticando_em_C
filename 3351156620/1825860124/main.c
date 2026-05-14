#include <stdio.h>

int main () {
  int N;
  scanf("%d", &N);
  int v[N];
  for(int i = 0; i < N;i++) {
      scanf("%d", &v[i]);
  }

  int a;
  scanf("%d", &a);

  int novo_tam = 0;
  for (int i = 0; i < N; i++) {
      if(v[i] != a) {
          v[novo_tam] = v[i];
          novo_tam++;
      }
  }

  int cont = 1;
  int achou = 0;

  for(int i = 1; i < novo_tam;i++) {
      if (v[i] == v[i - 1]) {
          cont++;
          if(cont == 3) {
              achou = 1;
          }
      } else {
          cont = 1;
      }
  }

  if (achou) {
      printf("tripla\n");
  } else {
      printf("nada\n");
  }
  return 0;
}