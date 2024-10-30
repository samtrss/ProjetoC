#include <stdio.h>

float calculaIMC(float peso, float altura){
    return peso/((altura*altura)/10000);
}
int main(){
    float peso, altura;
    printf("Digite o peso em kilogramas:\n");
    scanf("%f", &peso);
    printf("Digite a altura em centimetros:\n");
    scanf("%f", &altura);

    float IMC=calculaIMC(peso, altura);
    printf("O valor do IMC é %.2f", IMC);
    return 0;
}