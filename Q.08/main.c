#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q.08
    //definindo as variaveis
    float n1, n2, n3, media_ponderada;
    int lab = 2, av_semestral = 3, exame_final = 5;

    //entrada de dados
    printf("Informe as tres notas do aluno:\n");
    printf("Nota Laboratorio: ");
    scanf("%f", &n1);
    printf("Nota Av. Semestral: ");
    scanf("%f", &n2);
    printf("Nota Exame Final: ");
    scanf("%f", &n3);

    //calculo da media ponderada
    media_ponderada = (n1 * lab + n2 * av_semestral + n3 * exame_final)/(lab+av_semestral+exame_final);

    //estrutura para analisar e imprimir o conceito de acordo com o valor da media
    if(media_ponderada >= 8.0 && media_ponderada <= 10.0) {
        printf("Conceito: A\n");
    } else if(media_ponderada >= 7.0 && media_ponderada < 8.0) {
        printf("Conceito: B\n");
    } else if(media_ponderada >= 6.0 && media_ponderada < 7.0) {
        printf("Conceito: C\n");
    } else if(media_ponderada >= 5.0 && media_ponderada < 6.0) {
        printf("Conceito: D\n");
    } else if(media_ponderada < 5.0) {
        printf("Conceito: E\n");
    } else {
        printf("Ivalido\n");
    }
        printf("Media Final: %.1f\n", media_ponderada);


    return 0;
}
