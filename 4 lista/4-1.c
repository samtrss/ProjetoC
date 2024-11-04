/*1. O Índice de Desenvolvimento Humano (IDH) é uma medida 
do bem-estar de uma população. Engloba três dimensões: 
educação (E), longevidade (L) e a riqueza (R). A 
dimensão educação (E) determina o método de cálculo 
do IDH de uma localidade, de acordo com as seguintes 
regras:
a. Caso a dimensão Educação seja maior ou igual à soma 
das demais dimensões a fórmula para o cálculo do 
IDH é:
IDH = E * L * R / ((E + L + R)/3)
b. Caso a dimensão Educação não seja maior ou igual a 
soma das demais dimensões a fórmula para o cálculo 
do IDH é:
IDH = (E + L + R)/3
Escreva um programa, utilizando a função abaixo, que 
leia os valores das dimensões Educação (E), 
Longevidade (L) e Riqueza (R) de uma localidade e 
exiba o IDH, calculado de acordo com a descrição 
acima. Todos os valores são reais. Faça a função 
calculaIdh que recebe como parâmetro as 3 dimensões, 
calcula e retorna o IDH.*/

#include <stdio.h>
#include <math.h>

float calculaIdh(float E, float L, float R){
    float Idh;
    Idh = E*L*R/ ((E+L+R)/3);
    return Idh;
}

int main(){
    float E, L, R, Idh;
    printf("Digite o valor da Educacao, Longevidade e Riqueza\n ");
    scanf("%f %f %f", &E, &L, &R);
    if (E == (L+R)){
       Idh = (E + L + R)/3;
    }
    else {
        Idh = calculaIdh(E, L, R);
    }
     printf("O IDH calculado é: %.2f\n", Idh);
    return 0;
    
}
