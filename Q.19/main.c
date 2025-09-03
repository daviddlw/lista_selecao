#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q.19
    float salario_minimo, valor_h, salario_mes, salario_bruto, salario_liquido;
    float valor_dependentes, valor_h_extra, valor_total_h_extra;
    float irrf, gratificacao, salario_final;
    int horas_trabalhadas, dependentes, horas_extras;

    // Entrada de dados
    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);
    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%d", &horas_extras);

    //calculos
    valor_h = salario_minimo / 5;
    salario_mes = horas_trabalhadas * valor_h;
    valor_dependentes = dependentes * 32;
    valor_h_extra = valor_h * 0.5;
    valor_total_h_extra = horas_extras * valor_h_extra;

    salario_bruto = salario_mes + valor_dependentes + valor_total_h_extra;

    //calculo do IRRF
    if (salario_bruto < 200) {
        irrf = 0;
    } else if (salario_bruto <= 500) {
        irrf = salario_bruto * 0.10;
    } else {
        irrf = salario_bruto * 0.20;
    }

    salario_liquido = salario_bruto - irrf;

    // Cálculo da gratificação
    if (salario_liquido <= 350) {
        gratificacao = 100;
    } else {
        gratificacao = 50;
    }

    //salario final
    salario_final = salario_liquido + gratificacao;

    //imorimindo o resultado
    printf("=================================================\n");
    printf("Salario liquido: R$ %.2f\n", salario_liquido);
    printf("Salario a receber: R$ %.2f\n", salario_final);
    return 0;
}
