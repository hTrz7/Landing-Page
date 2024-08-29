/*
    Escreva um programa para controlar o estoque de uma loja de eletr�nicos.
    O programa deve consistir em um menu que permita:

    1. Cadastrar novo produto: O sistema deve suportar at� 15 produtos, em uma matriz 3x5. Cada produto deve possuir:
        a. C�digo
        b. Marca
        c. Descri��o
        d. Pre�o
        e. Quantidade

    2. Alterar o pre�o de um produto: Deve permitir buscar um produto pelo c�digo e alterar seu pre�o.

    3. Vender um Produto: Nesta op��o, informa o c�digo do produto. Com isso, ele reduz a quantidade do produto
    e armazena o valor da venda em "saldo total". Necess�rio validar se existe o produto em estoque. Caso n�o exista,
    ou seja, estoque = 0, informar que j� esgotou.

    4. Visualiza saldo total de vendas

    5. Encerrar o sistema
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct cadastroProduto{
    int codigo, quantidade;
    char marca[15], descricao[100];
    float preco;
};

#define qtdprodutos 15

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct cadastroProduto produto[3][5];

    for(int p = 0; p < qtdprodutos; p++){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 5; j++){
                printf("informe o codigo do produto: ");
                scanf("%d", &produto[i][j].codigo);
                getchar();
                
                printf("informe a marca do produto: ");
                fgets(produto[i][j].marca, sizeof(produto[i][j].marca), stdin);
                produto[i][j].marca[strcspn(produto[i][j].marca, "\n")] = '\0';
                getchar();

                printf("informe a descri�ao do produto: ");
                fgets(produto[i][j].descricao, sizeof(produto[i][j].descricao), stdin);
                produto[i][j].descricao[strcspn(produto[i][j].descricao, "\n")] = '\0';
                getchar();

                printf("informe o pre�o do produto: ");
                scanf("%f", &produto[i][j].preco);
                getchar();

                printf("informe a quantida de produtos: ");
                scanf("%d", &produto[i][j].quantidade);
                getchar();
            }
        }
    }


    return 0;
}