#include <stdio.h>
#include <stdlib.h>
main()
{
    float soma = 0;
    float valor;
    int opcao;
    do
    {
        printf("\n Digite uma Operação");
        printf("\n 1. Deposito: ");
        printf("\n 2. Saque: ");
        printf("\n 3. Saldo: ");
        printf("\n Opção?? \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\n Valor do deposito? \n R$ ");
            scanf("%f", &valor);
            soma = soma + valor;
            break;
        case 2:
            printf("\n Valor do Saque: \n R$ ");
            scanf("%f", &valor);
            soma = soma - valor;
        case 3:
            printf("\n Saldo atual = R$ %.2f \n ", soma);
            break;
        defaut:
            if (opcao != 4)
                printf("Fim das Operações!\n \n");
        }
    } while (opcao != 4);
    printf("Fim das operações. \n \n");
    system("pause");
    return 0;
}
