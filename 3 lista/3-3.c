#include <stdio.h>
#include <ctype.h>

void verificaConsoante(char caractere){
    if (caractere >= 'A' &&caractere <= 'Z'){
        if(caractere !='A' && caractere != 'E' &&caractere !='I' &&caractere != 'O' &&caractere != 'U'){
            printf("Cosoante maiuscula");
        }
    else {
        printf("Nao e consoante maiuscula");
    }
    }
}
int main(){
    char caractere;
    printf("Digite o cactere alfanumerico:\n");
    scanf("%c", &caractere);
    verificaConsoante(caractere);
    return 0;
}