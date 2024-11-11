#include <stdio.h>
#include <string.h>

void exiberesul(char time1[], int qtdgols1, char time2[], int qtdgols2){
    if (qtdgols1 == qtdgols2){
        printf("Empate\n");
    } 
        else if (qtdgols1 > qtdgols2){
            printf("%s ganhou\n", time1);
            }
            else{
                printf("%s ganhou\n", time2);
            }
}
int main(){
    char tim1[50], tim2[50];
    int qtd1, qtd2;
    printf("Digite o nome do primeiro, do segundo time, a quantidade de gols do primeiro time e a quantidade de gols do segundo time\n");
    scanf("%s %s %d %d", tim1, tim2,&qtd1,&qtd2);
    exiberesul(tim1, qtd1, tim2, qtd2);
    return 0;

}