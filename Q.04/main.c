#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.4 Fa�a um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
    //ou n�o.

    //definindo as variaveis
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Essa pessoa e de maior!");
    } else {
        printf("Essa pessoa e de menor");
    }
    return 0;
}
