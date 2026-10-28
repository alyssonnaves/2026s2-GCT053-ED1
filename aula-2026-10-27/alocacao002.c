#include <stdio.h>
#include <stdlib.h> // usar alocacao dinamica

int main(){
    int *vetor = calloc(5, sizeof(int));
    printf("vetor original com 5 elementos no endereco: %p\n", vetor);
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = (i+1)*10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    int *novo_vetor = realloc(vetor, 10*sizeof(int));
    printf("novo vetor com 10 elementos no endereco: %p\n", novo_vetor);
    for (int i = 0; i < 10; i++)
    {
        printf("novo_vetor[%d] = %d\n", i, novo_vetor[i]);
    }
    // free(vetor);
    free(novo_vetor);
    return 0;
}