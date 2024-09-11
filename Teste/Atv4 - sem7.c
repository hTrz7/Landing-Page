/*
    Escreva um programa que cadastre até 5 clientes e até 5 produtos.
    No sistema o usuário deve poder:

    - Cadastrar o cliente (Código, Nome, idade, saldo)
    - Cadastrar produto (código do produto, descrição do produto, valor do produto, qtd)
    - Cadastrar uma venda de um produto pra um cliente (pelo código do cliente e código do produto).
    - Listar todas as vendas
    - Listar todas os cliente

    - Use SUBROTINAS e PONTEIROS onde julgar necessário

    Cadastro de venda:
    - Recebe o código do cliente e valida se o cliente existe
    - Recebe o código do produto e valida se o produto existe
    - Recebe a quantidade de produto da venda e valida se existe em estoque
    - Calcula o total da Venda
    - Valida se o cliente tem saldo pra finalizar a compra
    - Abate o valor da venda no saldo do cliente e a quantidade vendida no estoque do produto
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define qtdCliente 5
#define qtdProduto 5

typedef struct{
    int cod;
    int idade;
    float saldo;
    char nome[50];
}cadastroCliente;

typedef struct{
    int cod, qtd;
    float valor;
    char desc[15];
}cadastroProduto;

void cliente(cadastroCliente *p){
    printf("informe seu código: ");
    scanf("%d", &p->cod);
    getchar();
    printf("informe seu nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strcspn(p->nome, '\n')] = '\0';
    getchar();
    printf("informe sua idade: ");
    scanf("%d", &p->idade);
    getchar();
    printf("informe seu saldo: ");
    scanf("%f", &p->saldo);
    getchar();
}

void produto(cadastroProduto *p){
    printf("informe o código do produto: ");
    fgets(p->cod, sizeof(p->cod), stdin);
    getchar();
    printf("informe a descrição do produto: ");
    fgets(p->desc, sizeof(p->desc), stdin);
    p->desc[strcspn(p->desc, '\n')] = '\0';
    getchar();
    printf("informe o valor do produto: ");
    scanf("%f", p->valor);
    getchar(); 
    printf("informe a quantidade que deseja cadastrar: ");
    scanf("%d", p->qtd);
    getchar();
}

void venda(cadastroCliente *c, cadastroProduto *p){
    int acha = 0, acha2 = 0, codCliente, codProduto, quantidadeProd;
    float Totalvenda;

    for(int i = 0; i < 5; i++){
        printf("informe o codigo do cliente: ");
        scanf("%d", &codCliente);
        if(codCliente == c->cod){
            acha = 1;
        }
        if(acha == 1){
            printf("codigo do cliente válido.");
        }else{
            printf("codigo do cliente nao encontrado.");
        }
        printf("informe o codigo do produto: ");
        scanf("%d", &codProduto);            
        if(codProduto == p->cod){
            acha2 = 1;
         }
         if(acha2 == 1){
            printf("codigo do produto válido.");
         }else{
            printf("codigo do produto nao encontrado.");
        }
        printf("informe a quantidade de produtos que deseja comprar: ");
        scanf("%d", &quantidadeProd);
        if(p->qtd >= 1){
            printf("há o total de %d em estoque.", p->qtd);
        }else{
            printf("não tem em estoque.");
        }
    }
    Totalvenda = p->valor + quantidadeProd;
    if(c->saldo >= Totalvenda){
        printf("tem saldo disponivel para a compra.");
        c->saldo -= Totalvenda;
        p->qtd -= quantidadeProd;
    }else{
        printf("saldo indisponivel");
    }
}

int main(){

    setlocale (LC_ALL, "Portuguese");

    cadastroCliente clientes[qtdCliente];
    cadastroProduto produtos[qtdProduto];
    int opc;

    do{
        printf("escolha uma opção:\n1 - cadastrar cliente\n2 - cadastrar produto\n3 - cadastrar uma venda\n4 - listar as vendas\n5 - listar os produtos\n6 - sair\nInforme aqui: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                cliente(clientes);
                break;
            case 2:
                produto(produtos);
                break;
            case 3:
                venda(clientes, produtos);
                break;
            case 4:
                
                break;
            case 5:

                break;
            case 6:
                printf("sair do programa.");
                break;
            default:
                printf("opção invalida.");
                break;
        }
    }while(1);
    return 0;
}