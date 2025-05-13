/*
    Escreva um programa que receba 9 numeros e os armazene em uma matriz 3x3.
    A sa√≠da do programa dever√° ser a soma dos numeros da diagonal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3], soma = 0, soma2 = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("insira os n˙meros da matriz: linha(%d) coluna(%d)", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){    
        soma += matriz[i][i];    
    }
    for(int i = 2; i >= 0; i--){
        soma2 += matriz[i][i];
    }
    printf("A soma dos numeros da diagonal esquerda superior ate direita inferior È: %d \n", soma);
    printf("A soma dos numeros da diagonal direita superior ate a esquerda inferior È: %d", soma2);

    return 0;
}