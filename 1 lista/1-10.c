#include <stdio.h>
#include <math.h>
int sobradinheiro(int dinheiro,int cedula) {
    int qtdcedula, rest;
    qtdcedula= dinheiro/cedula;
    rest= dinheiro%cedula;
    printf("Valor do montante %d", dinheiro);
    printf("Valor da cedula %d", cedula);
    printf("Quantidade necessaria da cedula %d", qtdcedula);
    printf("Montante restante em dinheiro %d", rest);
    return 0;
}