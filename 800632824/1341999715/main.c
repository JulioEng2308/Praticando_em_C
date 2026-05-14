#include <stdio.h>

int main () {
    int num1, num2, num3;
    int menor;
    scanf("%d %d %d", &num1, &num2, &num3);
    menor = num1;
    if (menor > num2) {
       menor = num2;
    } 
    if (menor > num3) {
        menor = num3;
    }
    printf("%d\n", menor);
    return 0;
}