
#include <stdio.h>
#include <stdlib.h> // usar alocacao dinamica

typedef struct {
    int *dados;
    int tamanho;
    int capacidade;
} Vetor;

void adicionar(Vetor *v, int valor){
    if (v->tamanho == v->capacidade){        
        v->capacidade = v->capacidade * 2;
        printf("Realocando memoria para o vetor\n");
        printf("Novo tamanho do vetor: %d\n", v->capacidade);
        int *novo = realloc(v->dados, v->capacidade *sizeof(int));
        if (novo == NULL){
            printf("Erro ao realocar memoria\n");
            exit(1);
        }
        v->dados = novo;
    }
    v->dados[v->tamanho] = valor;
    v->tamanho++;
}

void imprimir(Vetor *v){
    for (int i = 0; i < v->tamanho; i++){
        printf("%d ", v->dados[i]);
    }
    printf("\n");
}

void main(){
    Vetor numeros;
    numeros.capacidade = 5;
    numeros.tamanho = 0;
    numeros.dados = calloc(numeros.capacidade, sizeof(int));
    for (int i = 0; i < 20; i++)
    {
        adicionar(&numeros, i+1);
        imprimir(&numeros);
    }
    
    free(numeros.dados);   // liberar memoria
}