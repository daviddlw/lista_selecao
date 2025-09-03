#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definindo as variaveis
    float preco;
    int codigo;

    // Entrada de dados
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);
    //estrutura para verificar o codigo e a procedencia
    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else {
        printf("Codigo invalido\n");
    }

    return 0;
}
