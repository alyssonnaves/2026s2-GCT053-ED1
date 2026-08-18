#include <stdio.h>

int soma(int x, int y);  //  assinatura da funcao

int main(){
    // processamento
    int a = 10;
    int b = 30;
    int r = soma(a, b);
    printf("Resultado da soma %d + %d = %d\n", a, b, r);
    return 0;
}

int soma(int x, int y){
    return x + y;
}