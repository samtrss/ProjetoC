#include <stdio.h>

// Função para exibir a tabuada de N
void exibetabuada(int N) {
    int i;
    for(i = 1; i <= 10; i++) {  // Laço de 1 até 10
        printf("%d * %d = %d\n", N, i, N * i);
    }
}

int main() {
    int num, p;
    
    // Laço de 1 até 9 para imprimir as tabuadas
    for(p = 1; p <= 10; p++) {
        printf("A tabuada de %d:\n", p);
        exibetabuada(p);  // Chama a função para exibir a tabuada
        printf("\n");  // Linha em branco para separar as tabuadas
    }
    
    return 0;
}
