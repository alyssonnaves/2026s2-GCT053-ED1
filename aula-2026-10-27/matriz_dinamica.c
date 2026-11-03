#include<stdio.h>
#include<stdlib.h>

void adicionar(int *matriz, int colunas, int i, int j, int valor){
    matriz[i*colunas + j] = valor;
}

int main(){
    int linhas = 3, colunas = 4;
    // alocando memoria para a matriz - contigua da memoria
    int *matriz = malloc(linhas*colunas* sizeof(int));
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            adicionar(matriz, colunas, i, j, 10*(i+1)+j);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ", matriz[i*colunas + j]);
        printf("\n");
    }

    printf("imprimindo como vetor\n");
    for (int i = 0; i < linhas*colunas; i++)
    {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    free(matriz);
    return 0;
}