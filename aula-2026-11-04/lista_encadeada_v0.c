#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;


int main(){
    No *inicio = NULL; // lista esta vazia

    No *novo = malloc(sizeof *novo);
    novo->dado = 10;
    novo->prox = NULL;

    inicio = novo;

    No *outro_no = malloc(sizeof *outro_no);
    outro_no->dado = 20;
    outro_no->prox = NULL;

    inicio->prox = outro_no;  // novo->prox = outro_no

    No *mais_um_no = malloc(sizeof *mais_um_no);
    mais_um_no->dado = 30;
    mais_um_no->prox = NULL;

    outro_no->prox = mais_um_no;
    //
    novo->prox = mais_um_no;
    mais_um_no->prox = outro_no;
    outro_no->prox = NULL;
    
    // imprimir
    No *atual = inicio;
    while (atual != NULL){
        printf("%d => ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
    return 0;
}

