#include <stdio.h>

int main(){

    float altura, peso , imc;

    printf("informe sua altura (em metros): ");
    scanf("%f", &altura);
    printf("informe seu peso (em kilos): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    
    if(imc < 18.5){
        printf("esta abaixo do peso. IMC: %.2f.", imc);
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("esta no peso ideal. IMC: %.2f.", imc);
    } else if(imc >= 25.0 && imc <= 29.9){
        printf("esta acima do peso. IMC: %.2f.", imc);
    } else if(imc >= 30.0 && imc <= 39.9){
        printf("esta obeso. IMC: %.2f", imc);
    }

    return 0;       
}