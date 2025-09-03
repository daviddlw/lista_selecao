#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
    //as regras:
    //categoria idade
    //infantil A 5 – 7 anos
    //infantil B 8 – 10 anos
    //juvenil A 11 – 13 anos
    //juvenil B 14 – 17 anos
    //sênior maiores de 18 anos

    //defininfo variaveis
    int idade;

    //entrada de dados
    printf("Categorias: \n>Infantil |A|-|B| \n>Juvenil  |A|-|B| \n>Senior Maiores \n");
    printf("Informe sua idade para saber sua categoria: ");
    scanf("%d", &idade);

    //Estrutura que avalia e mostra em qual categoria esta
    if(idade >= 5 && idade <= 7){
        printf("Sua categoria e: |Infantil A");
    } else if(idade >= 8 && idade <= 10){
        printf("Sua categoria e: |Infantil B");
    } else if(idade >= 11 && idade <= 13){
        printf("Sua categoria e: |Juvenil A");
    } else if(idade >= 14 && idade <= 17){
        printf("Sua categoria e: |Juvenil B");
    } else if(idade >= 18) {
        printf("Sua categoria e: |Senior Maiores");
    }else{
        printf("Nao esta apto!");
    }

    return 0;
}
