#include <stdio.h>

int main() {
    int x = 10;
    int *ponteiro = &x; // p é um ponteiro para x
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Endereco de x pelo ponteiro: %p\n", ponteiro);

    printf("Valor no endereco de x: %d\n", *ponteiro);
    // *ponteiro = 11;
    // printf("Valor de x: %d\n", x);

}