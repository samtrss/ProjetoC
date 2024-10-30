#include <stdio.h>

void Salariopessoa(float salario){
    if (salario == 1412){
        printf("Voce ganha um salario minimo\n");
        } else if(salario < 1412){
        printf("salario menor que um salario minimo\n");}
    else {
        printf("salario maior do que um salario minimo\n");}        
    }
int main(){
    float salario;
    printf("Digite o seu salario\n");
    scanf("%f", &salario);
    Salariopessoa(salario);
}


