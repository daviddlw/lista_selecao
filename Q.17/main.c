#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.17
    //definindo as variaveis
    int angulo_original, angulo;

    //entrada de dados
    printf("Digite a medida do angulo: ");
    scanf("%d", &angulo_original);

    //Redução do ângulo para o intervalo -360 a 360
    angulo = angulo_original % 360;

    //Ajustar para valores negativos que não caem nas faixas
    if (angulo < 0) {
        if (angulo >= -90)
            printf("O angulo esta no primeiro quadrante.\n");
        else if (angulo >= -180)
            printf("O angulo esta no segundo quadrante.\n");
        else if (angulo >= -270)
            printf("O angulo esta no terceiro quadrante.\n");
        else
            printf("O angulo esta no quarto quadrante.\n");

    } else {
         if (angulo < 90)
            printf("O angulo esta no primeiro quadrante.\n");
        else if (angulo < 180)
            printf("O angulo esta no segundo quadrante.\n");
        else if (angulo < 270)
            printf("O angulo esta no terceiro quadrante.\n");
        else
            printf("O angulo esta no quarto quadrante.\n");

    }
    return 0;
}
