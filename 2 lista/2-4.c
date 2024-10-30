#include <stdio.h>
void calculaIMC(float peso, float altura){
    float IMC;
    IMC =peso/((altura*altura)/10000);
    printf("O IMC e %.2f\n", IMC);
}
int main(){
    float peso, altura;
    printf("Digite o peso em kilogramas\n");
    scanf("%f", &peso);
    printf("Digite a altura em centimetros\n");
    scanf("%f", &altura);
    calculaIMC(peso, altura);
}