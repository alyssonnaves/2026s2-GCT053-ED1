#include <stdio.h>

int main() {
    int *p;
    printf("Valor de *p: %d\n", *p);
    *p = 42;
    printf("Valor de *p: %d\n", *p);
    return 0;
}