#include <stdio.h>

void situacaoAluno(float mediaAluno){
    if (mediaAluno > 9.0){
        printf("Parabens");
    }  if (mediaAluno >= 10){
        mediaAluno=10;
    } else if (mediaAluno >= 7.0){
        printf("Aprovado");
    } else if ( mediaAluno >= 3.0 &&mediaAluno < 7.0){
        printf("Prova final");
    } else  {
        printf("Reprovado");
    }
}
int main(){
    float mediaAluno, matricula, nota1, nota2;
    printf("Digite a matricula do Aluno\n");
    scanf("%f", &matricula);
    printf("Digite as duas notas do Aluno\n");
    scanf("%f %f", &nota1, &nota2);
    mediaAluno=(nota1+nota2)/2;
    printf("\nA matricula do aluno e %.f\n", matricula);
    printf("A media aritmetica e %.2f\n", mediaAluno);
    situacaoAluno(mediaAluno);

}