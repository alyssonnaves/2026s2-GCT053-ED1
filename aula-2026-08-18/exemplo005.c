#include <stdio.h>

void funcaoA(int a){
    printf("FA: ENDERECO DA VARIAVEL A = %p\n", &a);
    printf("FA: valor de A (antes) = %d\n", a);
    a = a * 10;
    printf("FA: valor de A (depois) = %d\n", a);
}

void funcaoB(int *p){
    printf("FB: ENDERECO DE P = %p\n", p);
    printf("FB: valor de *p ANTES = %d\n", *p);
    *p = *p * 100;
    printf("FB: valor de *p DEPOIS = %d\n", *p);
}

int main(){
    int a = 20;
    printf("MAIN: ENDERECO DA VARIAVEL A = %p\n", &a);
    printf("MAIN: valor de A (antes) = %d\n", a);
    funcaoA(a);
    printf("MAIN: valor de A (depois) = %d\n", a);
    printf("----------------------------------------\n");
    printf("MAIN: ENDERECO DA VARIAVEL A = %p\n", &a);
    funcaoB(&a);
    printf("MAIN: valor de A (depois) = %d\n", a);
    
    return 0;
}