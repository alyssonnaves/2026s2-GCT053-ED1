#include<stdio.h>

int maximo(int n1, int n2){
    if (n1>n2){
        return n1;
    }else{
        return n2;
    }
}

int main(){
    int numero1, numero2, maior;
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);
    maior = maximo(numero1, numero2);   
    printf("Maior =  %d\n", maior); 
    return 0;
}