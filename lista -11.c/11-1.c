#include <stdio.h>
void exibirtabuada(int N){
    int i=1;
    while (i<=10){
        printf("%d * %d = %d\n", N, i, N*i);
        i++;
    }
    printf("\n");
}
int main(){
    int num = 1;
    while(num<=10){
        printf("Tabuada de %d: \n", num);
        exibirtabuada(num);
        num++;
    }
    return 0;
}