#include<stdio.h>
#include<stdlib.h>

// devolve a matriz alocada
int **mat_alloc(int linhas, int colunas){
    // parte 1 - alocar n linhas
    int **matriz = malloc(linhas * sizeof (int *)); //  sizeof *matriz
    if (matriz == NULL) // se falhar a alocacao dinamica
        return NULL;
    // parte 2 - alocar as colunas para cada linha
    for (int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof (int));
        if (matriz[i] == NULL){
            // liberar os ponteiros alocados para as linhas anteriores
            for (int k = 0 ; k < i; k++){
                free(matriz[k]);
            }
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

void liberar(int **matriz, int linhas){
    if (matriz == NULL){
        return;
    }
    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}


int main(){
    int linhas = 10000, colunas = 10000;
    int **A = mat_alloc(linhas, colunas);
    if (A == NULL){
        printf("erro");
        return 1;
    }
    // preencher a matriz
    for (int i = 0; i < linhas; i++){
        // int linha = A[i];
        for (int j = 0; j < colunas; j++)
        {
            A[i][j] = 10*(i+1)+j;
        }        
    }
    //imprimir a matriz
    for (int i = 0; i < linhas; i++){
        // int linha = A[i];
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");    
    }
    liberar(A, linhas);
    return 0;
}