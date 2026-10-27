#include<stdio.h>

int main(){
    int v[5] = {10,20,30,40,50};

    printf("v[2] = %d\n", v[2]);  //30
    printf("*(v+2) = %d\n", *(v+2)); //30
    *(v+3) = 80;
    printf("v[3] = %d\n", v[3]); // 80

    printf("endereco de v = %p\n", v);
    printf("endereco de v[0] = %p\n", &v[0]);
    printf("endereco de v[2] = %p\n", &v[2]);
    printf("endereco de (v+2) = %p\n", (v+2));

    return 0;
}