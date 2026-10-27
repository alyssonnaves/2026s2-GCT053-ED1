#include <stdio.h>

typedef struct {
    int codigo;
    double preco;
} Produto;

void aplicar_desconto(Produto *p, double percentual) {
    p->preco = p->preco * ((100-percentual) / 100);

}

void imprimirProduto(Produto *p){
    printf("Produto\t|\tPreco\n");
    printf("%d\t\tR$ %f\n", p->codigo, p->preco);
}

void relatorio(Produto *lista, int n){
    printf("Produto\t|\tPreco\n");
    for (int i = 0; i < n; i++)
    {
        aplicar_desconto(&lista[i], 10);
        printf("%d\t\t%f\n", lista[i].codigo, lista[i].preco);        
    }
    
}

int main(){
    Produto prod;
    prod.preco = 1000.0f;
    prod.codigo = 111;
    imprimirProduto(&prod);
    aplicar_desconto(&prod, 15.0f);
    imprimirProduto(&prod);

    Produto lista_produtos[3];
    lista_produtos[0].codigo = 10;
    lista_produtos[0].preco = 100;
    lista_produtos[1].codigo = 20;
    lista_produtos[1].preco = 200;
    lista_produtos[2].codigo = 30;
    lista_produtos[2].preco = 300;

    relatorio(lista_produtos, 3);

    return 0;
}
