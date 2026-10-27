#include <stdio.h>
#include <stdlib.h> // usar alocacao dinamica

int main(){
    // alocacao dinamica
    int *vetor = malloc(5*sizeof(int));

    // vetor[0] = 10; // inicializar
    printf("vetor[0] = %d\n", vetor[0]);
    printf("*vetor = %d\n", *vetor);

    free(vetor); // liberar
    vetor = NULL; // boa pratica
    return 0;
}