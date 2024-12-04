#include <stdio.h>
#include <math.h>

float calcraiz(float num1, float num2){
    float raiz;

    printf("Digite o num1 e o num2\n");
    scanf("%f%f", &num1,&num2);
    raiz = pow(num1 +num2, 1.0/2.0);
    printf("O resultado é %.2f\n", raiz);

}

int main(){
    float numero1, numero2;
    calcraiz(numero1,numero2);
    return 0;
}