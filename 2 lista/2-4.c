#include <stdio.h>
void calculaIMC(float peso, int altura){
    float IMC, altf;
    altf = altura/100;
    IMC =peso/((altf*altf));
    printf("O IMC e %.2f\n", IMC);
}
int main(){
    float peso;
    int alt;
    printf("Digite o peso em kilogramas\n");
    scanf("%f", &peso);
    printf("Digite a altura em centimetros\n");
    scanf("%d", &alt);
    calculaIMC(peso, altura);
    return 0;
}
