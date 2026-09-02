#include <stdio.h>

int existe_negativo(int v[], int n){
    if (n==0) return 0;
    if (v[n-1] < 0) return 1;
    else return existe_negativo(v, n-1);
}
int main(){
    int vetor[] = {20,40,50,-60,70};
    int negativo = existe_negativo(vetor, 5);
    if (negativo==1){
        printf("Tem negativo\n");
    }else{
        printf("Nao tem negativo\n");
    }
    return 0;
}