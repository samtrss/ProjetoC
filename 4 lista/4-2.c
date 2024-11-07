 /*Faça um programa, utilizando a função abaixo, que leia 
a idade de uma pessoa e exiba a sua situação 
eleitoral.
Faça uma função que receba como parâmetro a idade de 
uma pessoa e exiba uma das mensagens abaixo:
• Não eleitor: idade < 16
• Eleitor facultativo: 16 ≤ idade < 18 ou idade > 70
• Eleitor: 18 ≤ idade ≤ 7*/

#include <stdio.h>
 

int calcEleitor(int idade){
    if (idade < 16){
        printf ("Não eleitor");}


    else
     if((idade >=16 &&idade <18) || idade >70){

            printf ("Eleitor facultativo");
        }
    else {
        printf("Eleitor");

    }
}
int main(){
    int idade;
    printf("Digite a idade");
    scanf("%d", &idade);
calcEleitor(idade);
    return 0;
    
}