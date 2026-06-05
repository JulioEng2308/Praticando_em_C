#include <stdio.h>

int substring (char s[], char z[]) {
    int i = 0, j;

    while (z[i] != '\0') {
        if (z[i] == z[0]) {
            j = 0;
            while (s[j] != '\0' && z[i + j] == s[j]) {
            j++;
          }
            if(s[j] == '\0') {
            return 1;
          }
        } 
        i++;
    }
    return 0;
}

int main () {
    char s[205], z[205];
    scanf("%s", s);

    while (s[0] != 'F') {
        scanf("%s", z);

        if (substring(s, z)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        scanf("%s", s);
    }
    return 0;  
}
