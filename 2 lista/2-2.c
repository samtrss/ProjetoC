#include <stdio.h>
#include <math.h>
float calcHipotenusa(float ladoA, float ladoB){
    return sqrt(ladoA*ladoA + ladoB*ladoB);
}
int main(){
    float ladoA, ladoB;
    printf("Digite o valor do lado A\n");
    scanf("%f", &ladoA);
    printf("Digite o valor do lado B\n");
    scanf("%f", &ladoB);
    float hipotenusa=calcHipotenusa(ladoA,ladoB);
    printf("O valor da hipotenusa é %.2f", hipotenusa);
    return 0;


}