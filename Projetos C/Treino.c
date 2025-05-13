#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num[5], ordenar;
    for(int i = 0; i < 5; i++){
        printf("Escreva um numero: ");
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(num[j] > num[j+1]){
                ordenar = num[j];
                num[j] = num[j+1];
                num[j+1] = ordenar;           
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("Ordem crescente: %d \n", num[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(num[j] < num[j+1]){
                ordenar = num[j];
                num[j] = num[j+1];
                num[j+1] = ordenar;           
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("Ordem decrescente: %d \n", num[i]);
    }

    return 0;
    
}