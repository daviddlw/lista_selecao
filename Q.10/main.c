#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que receba um n�mero, verifique se este n�mero � par ou �mpar e
    //imprima a mensagem.
    //definindo a variavel
    int n;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n);

    //verificar de � par pu impar
    if(n % 2 == 0) {
        printf("O numero %d e: PAR", n);
    } else {
        printf("O numero %d e: IMPAR", n);
    }



    return 0;
}
