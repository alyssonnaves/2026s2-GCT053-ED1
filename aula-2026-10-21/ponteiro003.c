#include<stdio.h>

void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x = 10, y = 20;
    troca(&x, &y);
    printf("valor de x = %d\n", x);
    printf("valor de y = %d\n", y);
    return 0;
}
