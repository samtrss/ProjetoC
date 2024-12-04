#include <stdio.h>

int calcpreco(float preco, int percentual){
    float novoprod, porcentagem;
    porcentagem=((float)percentual/100);
    novoprod= preco*porcentagem+preco;
    printf("O valor e %.2f", novoprod);
    return novoprod;
}

int main(){
    int  percent;
    float prec;
    printf("Digite o preco e a porcentagem\n");
    scanf("%f%d", &prec,&percent);
    calcpreco(prec, percent);
    return 0;
}