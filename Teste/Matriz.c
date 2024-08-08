//armazenar valor de rendas per capitas//

#include <stdio.h>
#include <string.h>

int main(){

    int matriz[4][3];

    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 2; j++){
            printf("Informe a renda: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("%d", matriz);

    return 0;
}