#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que calcule e imprima o sal�rio reajustado de um funcion�rio de acordo
    //com a seguinte regra:
    // � sal�rios at� 300, reajuste de 50%;
    //� sal�rios maiores que 300, reajuste de 30%.
    //defininndo variaveis
    float salario, salario_reajustado;

    //entrada de dados
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento, condi��o para reajuste de salario
    if(salario <= 300){
        salario_reajustado = salario + (salario * 0.5);
        printf("Salario reajustado para: %.2f", salario_reajustado);
    } else {
        salario_reajustado = salario + (salario * 0.3);
        printf("Salario reajustado para: %.2f", salario_reajustado);
    }

    return 0;
}
