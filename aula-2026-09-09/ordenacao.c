#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

// assinaturas das funcoes
void imprimir(int vetor[], int n);
void insertion_sort(int A[], int n);
void selection_sort(int A[], int n);
void preencher_aleatorio(int vetor[], int n);

int main(){
    int v[10]; 
    preencher_aleatorio(v, 10); // 5 elementos
    printf("Desordenado\n");
    imprimir(v, 10);
    selection_sort(v, 10);
    printf("Ordenado\n");
    imprimir(v, 10);
    return 0;
}

void insertion_sort(int A[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        int x =  A[i];
        int j = i-1;
        // imprimir(A, n);
        while (j>=0 && A[j]>x)
        {
            A[j+1] = A[j];  //  movimento
            j=j-1;
            // imprimir(A, n);

        }
        A[j+1] = x;
    }
}
void selection_sort(int A[], int n){
    printf("--selection sort--\n");
    for (int i = 0; i <= n-2; i++){
        int m = i; // indice do menor
        for (int j = i+1; j <= n-1 ; j++){
            if (A[j] < A[m]){
                m = j;
            }
        }
        // troca m e i de posicao
        int temp = A[i];
        A[i] = A[m];
        A[m] = temp;
        imprimir(A, n);   
    }
    printf("-------------------\n");
}

void imprimir(int vetor[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d, ",vetor[i]);
    }    
    printf("\n");
}

void preencher_aleatorio(int vetor[], int n){
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        vetor[i] = rand()%100;
    }    
}