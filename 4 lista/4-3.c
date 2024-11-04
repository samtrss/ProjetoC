#include <stdio.h>
#include <math.h>

float calcAreaCorp(int h, float p){
    float A;
    A= sqrt(p*h)/60;
    return A;
}

void exibeAlt(float A1, float A2){
    if (A1 ==A2){
        printf("Manteve area inalterada");
        }
    else 
        if(A1 < A2){
            printf("Aumentou a area corporal");
        }
        else {
            printf("Diminui area corporal");
        }
}

int main(){
    float p, A1, A2;
    int h;
    printf("Digite o peso em kilogramas, a altura em centimetros, a area do inicio do ano e a area do final do ano\n");
    scanf("%f %d %f %f",  &p ,&h ,&A1 ,&A2);
    calcAreaCorp(h, p);
    exibeAlt(A1, A2);
    return 0;
    
}
