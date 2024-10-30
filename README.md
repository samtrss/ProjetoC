
<<<<<<< HEAD
=======
#include <stdio.h>
    float valorVendaCombustivel(float precuni, float qtdcombustivel){
        return precuni*qtdcombustivel;
    }
    int main(){
        float precgal, precalc, precdiesel, qtdgal, qtdalc, qtddiesel, valgal, valalc, valdiesel;
        printf("Digite o preco da gasolina, alcool e diesel\n");
        scanf("%f %f %f", &precgal, &precalc, &precdiesel);
        printf("Digite a quantidade de gasolina, alcool e diesel\n");
        scanf("%f %f %f", &qtdgal,&qtdalc,&qtddiesel);
        valgal= valorVendaCombustivel(precgal, qtdgal);
        valalc= valorVendaCombustivel(precalc, qtdalc);
        valdiesel= valorVendaCombustivel(precdiesel, qtddiesel);
        printf("Valor das vendas de gasolina: R$%.2f\n", valgal);
        printf("Valor das vendas de alcool: R$%.2f\n", valalc);
        printf("Valor das vendas de diesel: R$%.2f\n", valdiesel);
        return 0;
    }  
>>>>>>> c27bf43de99c42e2014ba70c1524c1373845bc9f
