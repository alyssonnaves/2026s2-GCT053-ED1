#include <stdio.h>

int soma_positivo(int v[], int n){
    // caso base
    if (n==0) {
        return 0;
    }
    if (v[n-1]>0) {
        return v[n-1]+soma_positivo(v, n-1);
    }
    else {
        return soma_positivo(v,n-1);
    }
}

int main(){
    int vetor[] = {3,-1,5,-2,10};
    int soma = soma_positivo(vetor, 5);
    printf("Soma dos positivos %d\n", soma);
    return 0;
}