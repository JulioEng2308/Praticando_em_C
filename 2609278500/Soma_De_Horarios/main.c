#include <stdio.h>

void imprimir_hora (int timestamp) {
  int hora, min, seg;

  timestamp = timestamp % 86400;

  hora = timestamp / 3600;
  min = (timestamp % 3600) / 60;
  seg = timestamp % 60;

  printf("%02d:%02d:%02d", hora, min, seg);
}

int ler_hora (void) {
    int hora, min, seg, timestamp;
    scanf("%02d:%02d:%02d", &hora, &min, &seg);
    timestamp = hora * 3600 + min * 60 + seg;
    return timestamp;
}

int main (void) {
    int temp_atual;
    int temporizador;
    int resultado;

    temp_atual = ler_hora();
    temporizador = ler_hora();

    resultado = temp_atual + temporizador;

    imprimir_hora(resultado);
    return 0;
    
}
