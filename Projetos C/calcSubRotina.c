/*
    Escreva uma calculadora em C, com as 4 operações aritméticas.
    Onde cada operação deverá ser em uma sub-rotina diferente.
    Escreva uma subrotina para saída de dados.
    O programa deverá ser um menu de 5 opções, onde:
    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
    5. Sair
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void saida(float result){
    printf("o resultado da operacao �: %.2f\n", result);
}

void soma(float num1, float num2){
    float result = num1 + num2;
    saida(result);
}

void subtracao(float num1, float num2){
    float result = num1 - num2;
    saida(result);
}

void divisao(float num1, float num2){
    float result = num1 / num2;
    saida(result);
}

void multiplicacao(float num1, float num2){
    float result = num1 * num2;
    saida(result);
}

float entrada(char string[]){
    float num;
    printf("escolha o %s numero: ", string);
    scanf("%f", &num);
    return num;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

     int opc;
     float num1, num2;

     do{
        printf("Escolha qual operacao deseja fazer:\n");
        printf("1 - soma\n2 - subtracao\n3 - divisao\n4 - multiplicacao\n5 - sair\nInforme aqui: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                num1 = entrada("primeiro");
                num2 = entrada("segundo");
                soma(num1, num2);
                break;
            case 2:
                num1 = entrada("primeiro");
                num2 = entrada("segundo");
                subtracao(num1, num2);
                break;
            case 3:
                num1 = entrada("primeiro");
                num2 = entrada("segundo");
                divisao(num1, num2);
                break;
            case 4:
                num1 = entrada("primeiro");
                num2 = entrada("segundo");
                multiplicacao(num1, num2);
                break;
            case 5:
                return 0;
                break;
            default:
                printf("opcao invalida.");
                break;    
        }   
     }while(1);
     
    return 0;
}