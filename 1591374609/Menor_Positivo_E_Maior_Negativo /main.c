#include <stdio.h>

int main () {
  int num, numpos, numneg, tempos, temneg;

  tempos = 0;
  temneg = 0;
  
  while (scanf("%d", &num), num != 0) {
    if (num > 0) {
        if (tempos == 0) {
            numpos = num;
            tempos = 1;
        } else if (numpos > num) {
            numpos = num;
        }
    }

    if (num < 0) {
        if (temneg == 0) {
            numneg = num;
            temneg = 1;
        } else if (numneg < num) {
            numneg = num;
        }
    }
    

  }
      if (tempos == 1) {
        printf("%d ", numpos);
    } else {
        printf("- ");
    }

    if (temneg == 1) {
        printf("%d\n", numneg);
    } else {
        printf("-\n");
    }
  return 0;

}
