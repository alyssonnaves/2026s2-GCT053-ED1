#include <stdio.h>

int funcaoA(){
    printf("funcao A em execucao\n");
    return 10;
}

int funcaoB(){
    int varA = funcaoA();
    printf("funcao B em execucao\n");
    return varA*10;
}

int main(){
    printf("inicio main\n");
    int final = funcaoB();
    printf("valor final = %d\n", final);
    printf("fim main\n");
}