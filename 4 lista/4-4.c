#include <stdio.h>

int maiornum(int n1, int n2, int n3){
    if (n1 >n2 &&n1 >n3){
        return n1;
    } else if(n2 >n1 &&n2 >n3){
        return n2;
    }
    else{
        return n3;
    }

}
int main(){
    int n1, n2, n3;
    printf("Digite o primeiro, segundo e terceiro numero\n");
    scanf("%d %d %d", &n1,&n2,&n3);
    int maior = maiornum(n1, n2, n3);
    printf("O maior numero e %d", maior);
}