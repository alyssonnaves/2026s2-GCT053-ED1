#include <stdio.h>

void inc(int *p){
    (*p)++;
}

int main(){
    int a = 10;
    inc(&a);
    printf("valor de a = %d\n", a);
}