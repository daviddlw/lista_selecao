#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferiora 500
    //reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do
    //sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento.

    float salario, salario_reajustado = 0;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    if(salario < 500){
        salario_reajustado = 1.3 * salario;
        printf("Salario reajustado para: %.2f", salario_reajustado);
    } else {
        printf("O funcionario nao tem direito a aumento");
    }


    return 0;
}
