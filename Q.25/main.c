#include <stdio.h>
#include <stdlib.h>


int main()
{
   //Escreva um programa que calcule o que deve ser pago por um produto, considerando o
    //pre�o normal de etiqueta e a escolha da condi��o de pagamento. Utilize os c�digos da tabela
    //a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo adequado:
    //C�digo Condi��o de pagamento
    //1 � vista em dinheiro ou cheque, recebe 10% de desconto.
    //2 � vista no cart�o de cr�dito, recebe 5% de desconto.
    //3 Em 2 vezes, pre�o normal de etiqueta sem juros.
    //4 Em 3 vezes, pre�o normal de etiqueta mais juros de 10%.
    //definindo variaveis
    float valor_prod, valor_pagar;
    int condicao;

    //entrada de dados
    printf("\nSelecione o metodo de pagamento:\n");
    printf("|1| - Dinheiro/Cheque: a vista |10  de desconto|\n");
    printf("|2| - Cart�o de cr�dito: a vista |5 de desconto|\n");
    printf("|3| - 2x sem juros\n");
    printf("|4| - 3x com 10 porcento de juros\n");
    printf("Informe o metodo: ");
    scanf("%d", &condicao);

    //estrutura para verificar e calcular o valor a ser pago
    switch (condicao) {
        case 1:
            valor_pagar = valor_prod * 0.9;
            printf("Valor a ser pago com 10%% de desconto: R$ %.2f\n", valor_pagar);
            break;
        case 2:
            valor_pagar = valor_prod * 0.95;
            printf("Valor a ser pago com 5%% de desconto: R$ %.2f\n", valor_pagar);
            break;
        case 3:
            valor_pagar = valor_prod;
            printf("Valor a ser pago (2x sem juros): R$ %.2f (2x de R$ %.2f)\n", valor_pagar, valor_pagar / 2);
            break;
        case 4:
            valor_pagar = valor_prod * 1.10;
            printf("Valor a ser pago com 10%% de juros: R$ %.2f (3x de R$ %.2f)\n", valor_pagar, valor_pagar / 3);
            break;
        default:
            printf("Condi��o de pagamento inv�lida.\n");
    }


    return 0;
}
