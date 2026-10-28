#include <stdio.h>
#include <stdlib.h> // usar alocacao dinamica

int main(){
    // alocacao dinamica
    //int *vetor = malloc(5*sizeof(int));
    int *vetor = calloc(5, sizeof(int)); // alocacao dinamica e inicializacao com 0
   
    printf("vetor[0] = %d\n", vetor[0]);
    printf("*vetor = %d\n", *vetor);

    vetor[0] = 10; // inicializar
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

   

    printf("antes de liberar\n");
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("ANTES do free(vetor) - Endereco de vetor: %p\n", vetor);
    free(vetor); // liberar
    // free(vetor); // liberar novamente (não é seguro)
    printf("DEPOIS do free(vetor) - Endereco de vetor: %p\n", vetor);
    vetor = NULL; // evitar dangling pointer
    printf("depois de liberar\n");
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}