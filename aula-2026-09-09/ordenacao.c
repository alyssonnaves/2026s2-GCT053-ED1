#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

// assinaturas das funcoes
void imprimir(int vetor[], int n);
void insertion_sort(int A[], int n);
void selection_sort(int A[], int n);
void bubble_sort(int A[], int n);
void preencher_aleatorio(int vetor[], int n);
void merge(int A[], int tmp[], int inicio, int meio, int fim);
void merge_sort_rec(int v[], int tmp[], int inicio, int fim);

int main(){
    int tamanho = 15;
    int v[tamanho];
    preencher_aleatorio(v, tamanho);
    int aux[tamanho]; // apenas merge sort
    // 5 elementos
    printf("Desordenado\n");
    imprimir(v, tamanho);
    // bubble_sort(v, tamanho);
    merge_sort_rec(v, aux, 0, 9); // inicio=0, meio = 4, fim=9
    imprimir(v, tamanho);
    printf("Ordenado\n");
    imprimir(v, tamanho);

    return 0;
}

void merge_sort_rec(int v[], int tmp[], int inicio, int fim){
    // caso base
    printf("inicio = %d, fim = %d\n", inicio, fim);
    if (inicio>=fim){
        return;
    }
    int meio =  (inicio+fim)/2;
    printf("---meio = %d\n", meio);
    // lado esquerdo
    merge_sort_rec(v, tmp, inicio, meio);
    // lado direito
    merge_sort_rec(v, tmp, meio+1, fim);
    // juncao
    merge(v, tmp, inicio, meio, fim);
}

void merge(int v[], int tmp[], int inicio, int meio, int fim){
    int i = inicio;
    int j = meio + 1;
    int k = inicio;
    // parte 1
    while (i<=meio && j<=fim){
        if (v[i] <= v[j]){
            tmp[k] = v[i];
            i++;
        }else{
            tmp[k] = v[j];
            j++;
        }
        k++;
    }
    // parte 2 - finalizar
    while (i<= meio){
        tmp[k] = v[i];
        i++;
        k++;
    }

    while (j<=fim){
        tmp[k] = v[j];
        j++;
        k++;
    }

    // copiar o conteudo de tmp[] para v[]
    for(int t = inicio; t<=fim; t++){
        v[t] = tmp[t];
    }
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
    int contador = 0;
    for (int i = 0; i <= n-2; i++){
        int m = i; // indice do menor
        for (int j = i+1; j <= n-1 ; j++){
            contador++;
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
    printf("\ncontador = %d\n", contador);
    printf("-------------------\n");
}

void bubble_sort(int A[], int n){
    printf("--bubble sort--\n");
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = 0; j <= n-2; j++)
        {
            if (A[j]>A[j+1]){
                // trocar
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            imprimir(A, n);
        }
        
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