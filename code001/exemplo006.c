#include <stdio.h>

void zerar(int vetor[], int tamanho){
    int i;
    for(i = 0; i<tamanho; i++){
        vetor[i] = 0;
    }
}

void imprimir(int vetor[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("[%d]: %d\n", i, vetor[i]);
    }    
}

int main(){
    int array[] = {10,20,30,40,50};

    imprimir(array, 5);
    
    zerar(array, 5);
   
    imprimir(array, 5);
}