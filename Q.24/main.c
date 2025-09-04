#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.24 Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.

    //definindo cariaveis
    int n1, n2, n3, maior, menor, meio;

    //entrada de dados
    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    printf("Digite o numero 2: ");
    scanf("%d", &n2);
    printf("Digite o numero 3: ");
    scanf("%d", &n3);

    //estrutura para definir a ordem crescente
    if(n1 < n2 && n1 < n3) {
        menor = n1;
        if(n2 <= n3) {
            meio = n2;
            maior = n3;
        } else {
            meio = n3;
            maior = n2;
        }
    }else if(n2 <= n1 && n2 <= n3) {
        menor = n2;
        if(n1 <= n3) {
            meio = n1;
            maior = n3;
        } else {
            meio = n3;
            maior = n1;
        }
    }else{
        menor = n3;
        if(n1 <= n2) {
            meio = n1;
            maior = n2;
        } else {
            meio = n2;
            maior = n1;
        }
    }
    //imprime os numeros em ordem crescente
    printf("Ordem crescente: %d | %d | %d\n", menor, meio, maior);

    return 0;
}
