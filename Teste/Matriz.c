//armazenar valor de rendas per capitas//

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float matriz[4][3];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe a renda: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%.2f \n", matriz[i][j]);
        }
    }

    return 0;
}