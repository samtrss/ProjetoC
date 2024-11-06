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
    float pi, pf, A1, A2;
    int hi, hf;
    printf("Digite a altura inicial e o peso inicial\n");
    scanf("%d %f", &hi, &pi );
    printf("Digite a altura final e o peso final\n");
    scanf("%d %f", &hf, &pf);
    A1= calcAreaCorp(hi, pi);
    A2= calcAreaCorp(hf, pf);
    exibeAlt(A1, A2);
    return 0;
    
}
