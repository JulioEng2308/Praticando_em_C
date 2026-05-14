#include <stdio.h>

int main () {
  int let_a, let_b, pares;

  pares = 0;
  do {
    scanf("%d %d", &let_a, &let_b);

    if (!(let_a > let_b || let_b == 2 * let_a)){
      pares++;
    }
      
  } while (!(let_a > let_b || let_b == 2 * let_a));

  printf("%d\n", pares); 
  
}