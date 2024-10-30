#include <stdio.h>
float calculaValorGarcom(float gastocliente){
    float pagoGarcom, percent;
    percent= 10.0/100.0;
    pagoGarcom = gastocliente *percent;
    printf("O valor que o garcom vai receber e %.2f\n", pagoGarcom);
    return pagoGarcom;
}
void calculaValorTotal(float gastocliente){
    float gastototal, pagoGarcom;
    pagoGarcom= gastocliente*(10.0/100.0);
    gastototal = pagoGarcom + gastocliente;
    printf("O valor a ser pago pelo cliente e de %.2f\n", gastototal);
    }
int main(){
    float gastocliente;
    printf("Digite o valor gasto pelo cliente\n");
    scanf("%f", &gastocliente);
    calculaValorGarcom(gastocliente);
    calculaValorTotal(gastocliente);
    return 0;
}