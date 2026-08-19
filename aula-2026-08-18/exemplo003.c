#include <stdio.h>
// prototipo
int maior(int a, int b);

int main(void)
{
    printf("%d\n", maior(10, 7));
    int max = maior(80,100);
    printf("max = %d\n", max);
    return 0;
}
// definicao
int maior(int a, int b)
{
    if (a > b)
        return a;
    return b;
}