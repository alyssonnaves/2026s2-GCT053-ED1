#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

// criar um novo no
No *criar_no(int valor){
    No *novo = malloc(sizeof *novo);
    if (novo==NULL)
        return NULL; //  falha na alocacao
    
    novo->dado = valor;
    novo->prox = NULL;
    return novo;
}

int inserir_inicio(No **inicio, int valor){
    No *novo = criar_no(valor);
    if (novo == NULL) 
        return 0;
    novo->prox = *inicio;
    *inicio = novo;
    return 1;
}

void imprimir(No *inicio){
    No *atual = inicio;
    while (atual != NULL){
        printf("%d => ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

No *buscar(No *inicio, int valor){
    No *atual = inicio;
    while (atual != NULL){
        if (atual->dado == valor){
            return atual;
        }
        atual = atual->prox;
    }
    return NULL; // atual
}


int main(){
    No *lista = NULL; // a lista esta vazia
    // printf("%p",&lista);
    inserir_inicio(&lista, 10);
    imprimir(lista);

    inserir_inicio(&lista, 20);
    imprimir(lista);

    inserir_inicio(&lista, 30);
    imprimir(lista);

    for (int i = 0; i < 5; i++)
    {
        int valor = 30 + (i+1)*10;
        inserir_inicio(&lista, valor);
        imprimir(lista); 
        
    }
    
    No* procurado = buscar(lista, 50);
    if (procurado != NULL){
        printf("elemento encontrado\n");
        procurado->dado = procurado->dado * 2;
        imprimir(lista);
    }else{
        printf("elemento nao existe na lista\n");
    }
    return 0;
}

