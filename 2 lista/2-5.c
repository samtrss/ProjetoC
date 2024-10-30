#include <stdio.h>
float lecalculaIMC(float peso){
    float altura, IMC;
    printf("Digite a altura em centimetros\n");
    scanf("%f", &altura);
    IMC = peso/((altura*altura)/10000);
    return IMC;
}
int main(){
    float peso, IMC;
    printf("Digite o peso em kilogramas\n");
    scanf("%f", &peso);
    IMC = lecalculaIMC(peso);
    printf("O IMC e %.2f", IMC);
}