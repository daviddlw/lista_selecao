#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha �
    //um conjunto de caracteres que s�o: 'ASDFG'. O programa deve imprimir mensagem de
    //permiss�o ou nega��o de acesso.
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
