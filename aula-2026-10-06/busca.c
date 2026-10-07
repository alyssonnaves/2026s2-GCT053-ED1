#include <stdio.h>

int busca_sequencial(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int busca_binaria_iterativa(int v[], int n, int chave){
    int inicio = 0;
    int fim = n-1;
    
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int x = 15;
    int resultado = busca_binaria_iterativa(v, n, x);
    if (resultado != -1) {
        printf("Elemento %d encontrado na posição %d\n", x, resultado);
    } else {
        printf("Elemento %d não encontrado\n", x);
    }
    return 0;
}