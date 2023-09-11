#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Classificação do Triangilo: Informe a medida dos lados apertando a tecla ENTER para cada medida: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + b && c < a + b)
    {
        printf("\n\n Dadas as medidas: %d, %d, %d, temos um triangulo ", a, b, c);
        if (a == b && a == c)
        {
            printf("Este é um triangulo EQUILATERO! \n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Este é um triangulo ISOSCELES!\n");
        }
        else
        {
            printf("Este é um triangulo ESCALENO!\n");
        }
    }
    else
    {
        printf("\n\n As medidas fornecidas, %d, %d, %d não formam um triangulo ", a, b, c);
    }
    return 0;
}