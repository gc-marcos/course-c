#include <stdio.h>

int main()
{
    int numero;
    int i;
    int posicao = 0; // Inicializar posicao com -1 para que seja atualizada corretamente
    int vetor[10];

    printf("Entre com o numero de ate 3 casas, diferente de zero, a ser procurado em um vetor de 10 posicoes: ");
    scanf("%d", &numero); // Faltou ler o número a ser procurado

    for (i = 0; i < 10; i++)
    {
        printf("Entre com o numero para a posicao %02d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    while (vetor[posicao] != numero) // Adicionada a condição posicao < 0
    {
        posicao++;
    }

    for (i = 0; i < 10; i++) // Corrigido o limite do loop
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (i = 0; i < posicao; i++)
    {
        printf("  ");
    }
    printf("*\n"); // Adicionada quebra de linha

    return 0;
}