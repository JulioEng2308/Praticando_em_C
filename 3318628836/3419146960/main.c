#include <stdio.h>

int ehpar (int num) {
    if (num == 0) {
        return 1;
    } else {
        return !ehpar(num-1);
    }
}
void verificacao (int num) {
    if (ehpar(num)) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }
}

int main(void) {
  int num;
  scanf("%d", &num);
  
  while (num >= 0) {
      verificacao(num);
      scanf("%d", &num);
    }
  return 0;
}
