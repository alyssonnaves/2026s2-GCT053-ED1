#include <stdio.h>

void loop(int valor){
    printf("Valor: %d\n", valor);
    // caso base
    if (valor ==0){
        printf("Booom!\n");
        return;
    }
    loop(valor-1);
}

int main(){
    loop(10);
    return 0;
}