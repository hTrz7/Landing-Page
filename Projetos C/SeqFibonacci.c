#include <stdlib.h>
#include <stdio.h>

int main(){

    int num, soma, seq1;

    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i = 2; i <= num; i++){
        seq1 = i - 1;
        soma = seq1 + i;
        printf("%d \n", soma);
        /*if(num != i){
            printf("O numero nao faz parte da sequencia de fibonacci.");
        }*/
    }

    return 0;
}