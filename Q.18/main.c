#include <stdio.h>
#include <stdlib.h>

int main(){
    //Q.18
    //definindo variaveis
    int horas_extra, horas_falta, H;

    //entrada de dados
    printf("Informe a quantidade de horas extra: ");
    scanf("%d", &horas_extra);
    printf("Informe a quantidade de horas falta: ");
    scanf("%d", &horas_falta);

    //calculo da horas para receber o premio
    H = (horas_extra) - (2/3*(horas_falta));

    //exibição e estrutura para verificar o valor do premio a receber
    printf("=======================================\n");
    printf("Quantidade de horas extras: %d\n", horas_extra);
    printf("Quantidade de horas extras: %d\n", horas_falta);
    if(H >= 2400){
        printf("O premio a receber e: R$ 500\n");
    }else if(H >= 1800 && H < 2400){
        printf("O premio a receber e: R$ 400\n");
    }else if(H >= 1200 && H < 1800){
        printf("O premio a receber e: R$ 300\n");
    }else if(H >= 600 && H < 1200){
        printf("O premio a receber e: R$ 200\n");
    }else{
        printf("O premio a receber e: R$ 100\n");
    }




    return 0;
}
