#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char nome[30];
    int i;
    printf("Digite o sbrenome do aluno ou aluna: \n");
    scanf("%s", &nome);
    for (i = 0; nome[i] != ' '; i++)
        nome[i] = toupper(nome[i]);
    printf("\n \n Sobrenome convertido: %s ", nome);

    return 0;
}