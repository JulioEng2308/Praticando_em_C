#include <stdio.h>

int main () {
    int disc, aulas, ausen, num, cont, enter, carga;
    double freq, mednotas, nota1, nota2, nota3;

    scanf("%d", &disc);
    cont = 1;
    do {
      
      scanf("%d", &carga);
      aulas = carga / 2;

       
       ausen = 0;
      for (num = 0; num < aulas; num++) {
          scanf("%d", &enter);
          if (enter == 1) {
              ausen++;
          } 
        }

      scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

      freq = (double)(aulas - ausen) / aulas;
      mednotas = (nota1 + nota2 + nota3) / 3.00;

      
        if (freq < 0.75) {
            printf("Disciplina %d: RF\n", cont);
          } else if (mednotas < 5.0) {
            printf("Disciplina %d: RN\n", cont);
          } else {
            printf("Disciplina %d: AP\n", cont);
          }
    
        cont++;
        disc--;
      
    } while (disc > 0);
      return 0;
}