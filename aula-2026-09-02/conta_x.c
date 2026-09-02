#include <stdio.h>

int conta_x(int v[], int n, int x){
    // caso base
    if (n==0){
        return 0;
    }
    if (v[n-1]==x){ 
        // achou o elemento na ultima posicao
        return 1 + conta_x(v, n-1, x);
    }else{
        return conta_x(v, n-1, x);
    }
}

int main(){
    int vetor[] = {2,4,2,7,8,1,0,2,5};
    int total_elementos = 9;
    int procurado = 6;
    int frequencia = conta_x(vetor, total_elementos, procurado);
    printf("%d aparece %d vezes\n", procurado, frequencia);
    return 0;
}
