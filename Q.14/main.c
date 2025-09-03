#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba o código correspondente ao cargo de um funcionário e
    //imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo a tabela:
    //Código Cargo Percentual
    //1 Escriturário 50,00%
    //2 Secretário 35,00%
    //3 Caixa 20,00%
    //4 Gerente 10,00%
    //5 Diretor Não tem aumento
    //definição de varivel
    int codigo;

    //entrada de dados
    printf("|1| = Escrituario\n|2| = Secretario\n|3| = Caixa\n|4| = Gerente\n|5| = Diretor\n");
    printf("Informe seu cargo: ");
    scanf("%d", &codigo);

    //estrutura que seleciona o cargo e mostra se tem aumento
    switch(codigo){
        case 1:
            printf("Cargo: Escrituario\n");
            printf("Possui direito a aumento de 50%%");
            break;
        case 2:
            printf("Cargo: Secretario\n");
            printf("Possui direito a aumento de 30%%");
            break;
        case 3:
            printf("Cargo: Caixa\n");
            printf("Possui direito a aumento de 20%%");
            break;
        case 4:
            printf("Cargo: Gerente\n");
            printf("Possui direito a aumento de 10%%");
            break;
        case 5:
            printf("Cargo: Diretor");
            printf("Nao possui direito a aumento.");
            break;
        default:
            printf("Esse cargo nao existe");

    }


    return 0;
}
