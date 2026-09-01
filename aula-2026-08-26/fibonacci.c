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

int fib_memo(int n, int memo[]){
    // caso base
    if (n==1 || n==2){
        return 1;
    }
    if (memo[n]!=-1){
        return memo[n];
    }
    memo[n] = fib_memo(n-1, memo) + fib_memo(n-2, memo);
    return memo[n];
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

    //  implementar com memoizacao
    int memo[100];
    // inicializa a memoria
    
    for (i = 0; i < 100; i++){
        memo[i] = -1;
    }
    memo[1]=1;
    memo[2]=1;
    for (i = 1; i<=10; i++){
        printf("%d, ", fib_memo(i,memo));
    }

    return 0;
}