#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.16
    int idade, codigo = 0;
    char risco;

    // Entrada de dados
    printf("Informe a idade: ");
    scanf("%d", &idade);

    // Verifica se idade está dentro do intervalo permitido
    if (idade < 18 || idade > 70)printf("Nao esta apto para o seguro.\n");

    //entrada de dados do grupo de risco
    printf("Informe o grupo de risco:\n|B|b| = Baixo\n|M|m| = Medio\n|A|a| = Alto\nDigite: ");
    scanf(" %c", &risco);
    // Verificação usando switch e if
    switch (risco) {
        case 'b':
        case 'B':
            if (idade >= 18 && idade <= 24) {
                codigo = 7;
            } else if (idade >= 25 && idade <= 40) {
                codigo = 4;
            } else { // 41 a 70
                codigo = 1;
            }
            break;
        case 'm':
        case 'M':
            if (idade >= 18 && idade <= 24) {
                codigo = 8;
            } else if (idade >= 25 && idade <= 40) {
                codigo = 5;
            } else {
                codigo = 2;
            }
            break;

        case 'a':
        case 'A':
            if (idade >= 18 && idade <= 24) {
                codigo = 9;
            } else if (idade >= 25 && idade <= 40) {
                codigo = 6;
            } else {
                codigo = 3;
            }
            break;

        default:
            printf("Grupo de risco inválido.\n");
            return 0;
    }

    printf("Codigo do seguro: %d\n", codigo);

    return 0;
}
