#include <stdio.h>

int maxdivcom(int a, int b) {
    if (b == 0) {
      return a;
    } else {
      return maxdivcom(b, a % b);
    }
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    while(a != 0 && b != 0) {
        printf("%d\n", maxdivcom(a,b));
        scanf("%d %d", &a, &b);
    }
  return 0; 
}