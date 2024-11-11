#include <stdio.h>

void pagamentoDinheiro(float despesa){
    float pago, troco;
    printf("Digite o valor pago\n");
    scanf("%f", &pago);
    troco = pago - despesa;
    if (troco == despesa){
        printf("Não ha troco\n");
    }
        else if(troco > despesa){
            printf("O troco e %f\n", troco);
        }
}
int main(){
    
}