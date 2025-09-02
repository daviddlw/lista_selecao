#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.01 Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
    //das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
    //reprovado para média inferior a 7.0.

    float nota1, nota2, nota3, nota4, media = 0;

    printf("Entre com as quatros notas:\n");
    printf("Entre com a primeira nota:");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota:");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota:");
    scanf("%f", &nota3);
    printf("Entre com a quarta nota:");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    if (media >= 7){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
    return 0;
}
