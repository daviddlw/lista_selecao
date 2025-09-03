#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Faça um programa que mostre um menu com as seguintes opções:
    //• soma • raiz quadrada • finalizar
    //O programa deve receber a opção desejada, receber os dados necessários para a
    //operação de cada opção, realizar a operação e imprimir o resultado. Na opção
    //finalizar nada deve acontecer.
    //defiinido varivaveis
    int opcao, soma, raiz, n1, n2, numero;

    //entrada de dados
    printf("Opcoes:\n|1| = SOMA\|2| = RAIZ\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &opcao);

    //estrutura para calcular baseado no codigo digitado
    switch(opcao){
        case 1:
            printf("Digite o numero 1:");
            scanf("%d", &n1);
            printf("Digite o numero 2:");
            scanf("%d", &n2);
            soma = n1 + n2;
            printf("A soma e: %d", soma);
            break;
        case 2:
            printf("Digite o numero para saber sua Raiz quadrada: ");
            scanf("%d", &numero);
            raiz = sqrt(numero);
            printf("A raiz quadrada do numero %d e: %d", numero, raiz);
            break;
        default:
            printf("Opcao nao existente.");

    }

    return 0;
}
