#include <stdio.h>

int main (){

    int num;

    printf("informe um numero: ");
    scanf("%d", &num);

    for (int i = num - 1; i > 0; i--){
        num = num * i;
        printf("x %d = %d\n",i, num);
    }

    return 0;
}