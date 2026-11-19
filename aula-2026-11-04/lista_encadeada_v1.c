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

int inserir_fim(No **inicio, int valor){
    No *novo = criar_no(valor);
    if(novo == NULL){
        return 0;
    }    No *lista = NULL; // a lista esta vazia

    // caso da lista vazia
    if (*inicio == NULL){
        // 1- chamar inserir inicio, ou
        // 2- resolver aqui mesmo.
        *inicio = novo;
        return 1;
    }

    No *atual = *inicio;
    while (atual->prox != NULL){ //atual para na ultima celula
        atual = atual->prox;
    }
    atual->prox = novo;
    return 1;
}


int inserir_apos(No *atual, int valor){
    if (atual == NULL)
        return 0;
    No *novo = criar_no(valor);
    if (novo==NULL)
        return 0;
    
    novo->prox = atual->prox;
    atual->prox = novo;
    return 1;        
}

int remover_inicio(No **inicio){

    if (*inicio == NULL){
        return 0;
    }
    No *removido = *inicio;
    *inicio = removido->prox;
    free(removido);
    return 1;
}

int remover_valor(No **inicio, int valor){
    No *atual = *inicio;
    No *anterior = NULL;

    while (atual!=NULL && atual->dado != valor){
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL){
        return 0;
    }

    if (anterior == NULL){ // remover o primeiro elemento
        *inicio = atual->prox;
    }else{
        anterior->prox = atual->prox;
    }
    free(atual);
    return 1;
}

int main(){
    No *lista = NULL; // a lista esta vazia

    remover_inicio(&lista);

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

    inserir_fim(&lista, 5);
    imprimir(lista);

    No *anterior = buscar(lista, 30);
    inserir_apos(anterior, 25);
    imprimir(lista);
    printf("remover do inicio\n");
    remover_inicio(&lista);
    imprimir(lista);
    printf("remover o elemento com valor 100\n");
    remover_valor(&lista, 100);
    imprimir(lista);

    printf("remover o elemento com valor 5 - final da lista\n");
    remover_valor(&lista, 5);
    imprimir(lista);


    printf("remover o elemento com valor 70 - inicio da lista\n");
    remover_valor(&lista, 70);
    imprimir(lista);
    return 0;
}

