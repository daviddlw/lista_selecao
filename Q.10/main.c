#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba um número, verifique se este número é par ou ímpar e
    //imprima a mensagem.
    //definindo a variavel
    int n;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n);

    //verificar de é par pu impar
    if(n % 2 == 0) {
        printf("O numero %d e: PAR", n);
    } else {
        printf("O numero %d e: IMPAR", n);
    }



    return 0;
}
