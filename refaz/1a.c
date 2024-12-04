#include <stdio.h>
void calcula(float n1, float n2){
    float produto;
    produto=n1*n2;
    printf("O produto e %.2f", produto);
}
int main(){
    float num1, num2;
    printf("Digite o primeiro numero e o segundo numero");
    scanf("%f%f",&num1,&num2);
    calcula(num1, num2);
    return 0;
}