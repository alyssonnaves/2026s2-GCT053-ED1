#include<stdio.h>

int soma(n){
    if (n==0){
        return 0;
    }
    return n + soma(n-1);
}

int main() {   
    int i = 0;
    for(i = 0; i<5; i++){
        int r = soma(i);
        printf("n=%d\t=>%d\n", i, r);
    }

}