#include <stdio.h>

int main (){

    int num;

    printf("informe um numero: ");
    scanf("%d", &num);

    for (int i = num -1; i >= 0; i--){
        num = num * i;
        printf("%d\n", num);
    }

    return 0;
}