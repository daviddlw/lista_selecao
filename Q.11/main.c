#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.11 Faça um programa que receba dois números e imprima o menor dos dois.
    //definindo variaveis
    int n1, n2;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    //imprimindo o menor
    if(n1 < n2)printf("%d Menor");
    if(n2 < n1)printf("%d Menor");

    return 0;
}
