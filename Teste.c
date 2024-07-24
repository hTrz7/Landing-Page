/*
    Escreva um programa que receba o salário de um funcionário e
    calcule quanto ele precisa pagar de imposto de renda (aliquota 25%)
*/

#include <stdio.h>

int main(){

    float salario, calc, ir;
    float media;
    int valor;
    int vaulor;
    int vouch;

    printf("informe o seu salario: ");
    scanf("%f", &salario);

    calc = (salario * 0.25) / 100;
    ir = calc - 873.6;

    printf("voce tera que pagar %.2f de imposto de renda.", ir);
    printf("voce tera que pagar %.2f de imposto de renda.", ir);
    printf("voce tera que pagar %.2f de imposto de renda.", ir);
    printf("voce tera que pagar %.2f de imposto de renda.", ir);
    return 0;
}