#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e
    //imprima seu cargo e o percentual de aumento ao qual este funcion�rio tem direito seguindo a tabela:
    //C�digo Cargo Percentual
    //1 Escritur�rio 50,00%
    //2 Secret�rio 35,00%
    //3 Caixa 20,00%
    //4 Gerente 10,00%
    //5 Diretor N�o tem aumento
    //defini��o de varivel
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
