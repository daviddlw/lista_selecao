#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que receba tr�s notas de um aluno, calcule e imprima a m�dia
    //aritm�tica entre essas tr�s notas e uma mensagem que segue a tabela abaixo:
    //M�dia Mensagem
    //0.0 |__ 5.0 reprovado
    //5.0 |__ 7.0 exame
    //7.0 |__| 10.0 aprovado

    //definindo variaveis
    float n1, n2, n3, media;

    //entrada de dados
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    //calculo da media
    media = (n1 + n2 + n3)/3;

    //verifica se condi��o do aluno com base na media
    if(media >= 0.0 && media < 5.0){
        printf("REPROVADO!");
    }else if(media >= 5.0 && media < 7.0){
        printf("EXAME.");
    }else if(media >= 7.0 && media <= 10.0){
        printf("APROVADO!");
    }else{
        printf("Invalido");
    }
    return 0;
}
