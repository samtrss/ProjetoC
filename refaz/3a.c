#include <stdio.h>
void exibe(int dias){
    int semanas, diasevent;
    semanas=dias/7;
    diasevent=dias%7;
    printf("%d semanas e %d dias\n", semanas, diasevent);
}
int main(){
    int qtd;
    printf("Digite o numero de dias do evento\n");
    scanf("%d", &qtd);
    exibe(qtd);
    return 0;
}