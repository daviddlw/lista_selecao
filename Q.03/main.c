#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
    //um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
    //permissão ou negação de acesso.
    //definindo a variavel
    char senha[10];

    //entrada de dados
    printf("Digite sua senha: ");
    scanf("%s", senha);

    //comparando duas strings
     if (strcmp(senha, "ASDFG") == 0) {
        printf("Senha correta, acesso permitido!\n");
    } else {
        printf("Acesso negado! Senha incorreta.\n");
    }

    return 0;
}
