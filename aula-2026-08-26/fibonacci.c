#include <stdio.h>

int fib(int n){
    if (n<=0){
        // garantia 
        printf("Nao envie valores negativos");
        return -1;
    }
    // caso base
    if (n==1 || n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    printf("fibonacci(3)=%d\n",fib(3));
    printf("fibonacci(4)=%d\n",fib(4));
    printf("fibonacci(5)=%d\n",fib(5));
    printf("fibonacci(6)=%d\n",fib(6));
    printf("imprimir a sequencia ate o decimo termo\n");
    int i;
    for (i = 1; i<=10; i++){
        printf("%d, ", fib(i));
    }
    printf("\n");
    return 0;
}