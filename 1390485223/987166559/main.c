#include <stdio.h>

int main (void) {
  int block;
  scanf("%d", &block);
  if (block < 5) {
    printf("Ativa\n");
  } else {
    printf("Bloqueada\n");
  }

  return 0;
}