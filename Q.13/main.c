#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que receba a idade de uma pessoa e classifique-a seguindo o crit�rio a seguir:
    //idade Classifica��o
    //0 a 2 anos Rec�m-nascido
    //3 a 11 anos crian�a
    //12 a 19 anos adolescente
    //20 a 55 anos adulto
    //Acima de 55 anos idoso

    //definindo variavel
    int idade;

    //entrada de dados.
    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    //verificar o que a pessoa � com base na sua idade
    if(idade >= 0 && idade <= 2){
        printf("Recem-Nascido");
    }else if(idade >= 3 && idade <= 11){
        printf("Crianca");
    }else if(idade >= 12 && idade <= 19){
        printf("Adolescente");
    }else if(idade >= 20 && idade <= 50){
        printf("Adulto");
    }else{
        printf("Idoso");
    }
    return 0;
}
