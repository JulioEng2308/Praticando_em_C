#include <stdio.h>

void transposta (int M, int N, int entrada[][N], int saida[][M]) {
    for (int i = 0; i < M;i++) {
        for (int j = 0; j < N; j++) {
            saida[j][i] = entrada[i][j];
        }
    }
}
int main (void) {
    int N, M;
    scanf("%d %d", &M, &N);
    int entrada[M][N];
    int saida[N][M];
    int menor;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &entrada[i][j]);
        }
    }

    transposta(M, N, entrada, saida);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", saida[i][j]);
        }
        printf("\n");
    }

    printf("diagonal: ");
    if(N < M) {
        menor = N;
    } else {
        menor = M;
    }

    for (int i = 0; i < menor; i++) {
        printf("%d ", saida[i][i]);
    }
    return 0;
}