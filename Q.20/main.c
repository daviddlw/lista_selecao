#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Q.20 Faça um programa para resolver equações do segundo grau.

    //definindo variaveis
    float a, b, c;
    float delta, x1, x2;

    //entrada de dados
    printf("Digite os coeficientes da equação a b e c\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    //calculo de delta
    delta = b * b - 4 * a * c;

    //calculo
    if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao possui duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    return 0;
}
