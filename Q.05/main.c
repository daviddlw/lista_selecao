#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
    //com a seguinte regra:
    // • salários até 300, reajuste de 50%;
    //• salários maiores que 300, reajuste de 30%.
    //defininndo variaveis
    float salario, salario_reajustado;

    //entrada de dados
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento, condição para reajuste de salario
    if(salario <= 300){
        salario_reajustado = salario + (salario * 0.5);
        printf("Salario reajustado para: %.2f", salario_reajustado);
    } else {
        salario_reajustado = salario + (salario * 0.3);
        printf("Salario reajustado para: %.2f", salario_reajustado);
    }

    return 0;
}
