#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
    //peso ideal, utilizando as seguintes fórmulas:
    //• para homens: (72.7 * H) - 58;
    //• para mulheres: (62.1 * H) – 44.7.
    //definindo variaveis
    float altura, peso_ideal;
    char sexo;

    //en-trada de dados
    printf("Infome seu sexo: |M| - Mulher |H| - Homem:");
    scanf("%s", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    //estrutura para calculo de peso ideal
    switch(sexo){
        case 'M':
        case 'm':
            peso_ideal = (62.1 * altura) - 44.7;
            printf("Seu peso ideal e: %.1f", peso_ideal);
            break;
        case 'H':
        case 'h':
            peso_ideal = (72.7 * altura) - 58;
            printf("Seu peso ideal e: %.1f", peso_ideal);
            break;
        default:
            printf("Invalido!");

    }


    return 0;
}
