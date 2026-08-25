#include <stdio.h>

int fatorial(int n){
    
    if (n==0){
        return 1;
    }
    printf("%d*%d!\n",n,n-1);
    return n*fatorial(n-1);
}

int main(){
    // testes
    printf("5! = %d\n", fatorial(5));
    printf("6! = %d\n", fatorial(6));
    return 0;
}