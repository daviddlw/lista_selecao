#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.26Escreva um programa que leia o valor de dois n�meros inteiros e a opera��o aritm�tica
    //desejada: calcule, ent�o, a reposta adequada. Utilize os s�mbolos da tabela a seguir para ler
    //qual a opera��o aritm�tica escolhida:
    //S�mbolo Opera��o aritm�tica
    //+ adi��o
    //- subtra��o
    //* multiplica��o
    // /divis�o
    //definindo variaveis
    int n1, n2;
    char operacao;
    float resultado;

    //entrada de dados
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Informe a operacao |+| |-| |*| |/|: ");
    scanf(" %c", &operacao);

    //Estrutura para fazer as operacoes
    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            printf("Adicao: %d + %d = %.2f\n", n1, n2, resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Subtracao: %d - %d = %.2f\n", n1, n2, resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Multiplicacao: %d * %d = %.2f\n", n1, n2, resultado);
            break;
        case '/':
            resultado = n1 / n2;
            printf("Divisao: %d / %d = %.2f\n", n1, n2, resultado);
            break;
        default:
            printf("Operacao existe!\n");
    }

    return 0;
}
