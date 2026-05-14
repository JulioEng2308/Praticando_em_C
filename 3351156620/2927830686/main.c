#include<stdio.h>

<<<<<<< HEAD
struct vetor{
  float x,y,z;
} typedef vetor;l]
=======
typedef struct {
  float x,y,z;
}  Vetor;

float escalar (Vetor v1, Vetor v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

int main () {
    Vetor v1, v2;

    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    float resultado = escalar(v1, v2);

    printf("%.2f\n", resultado);

    return 0;
}
>>>>>>> d60524c60640f438047398b13c6071710c3a90ad
