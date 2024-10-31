#include <stdio.h>
void calculaIMC(float peso, int altura){
    float IMC;
    IMC =peso/((altura*altura)/10000);
    printf("O IMC e %.2f\n", IMC);
}
int main(){
    float peso, altura;
    printf("Digite o peso em kilogramas\n");
    scanf("%f", &peso);
    printf("Digite a altura em centimetros\n");
    scanf("%d", &altura);
    calculaIMC(peso, altura);
    return 0;
}
