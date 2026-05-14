#include <stdio.h>
#include <stdlib.h>
typedef struct Num {
  int valor;
  struct Num *prox;
} Num;

void inserir_fim (Num **inicio, int valor) {
  Num *novo =(Num *)malloc(sizeof(Num));
  novo->valor = valor;
  novo->prox = NULL;

  if (*inicio == NULL) {
      *inicio = novo;
  } else {
      Num *aux = *inicio;
      while (aux->prox != NULL) {
          aux = aux->prox;
      }
    aux->prox = novo;
  }
}

void remover_valor (Num **inicio, int valor) {
    Num *atual = *inicio;
    Num *anterior = NULL;

    while (atual != NULL) {
        if(atual -> valor == valor) {
            if (anterior == NULL) {
                *inicio = atual -> prox;
            } else {
                anterior -> prox = atual -> prox;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual -> prox;
    }
}

void imprimir_lista (Num *inicio) {
    Num *aux = inicio;

    while (aux != NULL) {
        printf("%d", aux->valor);
        if(aux -> prox != NULL) {
          printf(", ");
        }
        aux = aux -> prox;
    }
    printf(".\n");
}

int main () {
    Num *lista = NULL;
    int N, M, valor;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &valor);
        inserir_fim(&lista, valor); 
    }

    scanf("%d", &M);

    for(int i = 0; i < M; i++) {
        scanf("%d", &valor);
        remover_valor(&lista, valor);
    }

    imprimir_lista(lista);

    return 0;
}