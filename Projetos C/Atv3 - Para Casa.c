/*
    Escreva um programa que receba e armazene 5 numeros inteiros em um vetor.
    O programa deverá ordenar esses numeros em ordem crescente.
    E depois, escreve-los na tela.
*/

#include <stdio.h>

int main(){

    int vetor[5], ordenar;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    //bubble sort
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                ordenar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = ordenar;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("Ordem crescente: %d \n", vetor[i]);
    }   

    return 0;
}