#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Classificacao do triangulo: informe a medida dos lados apertando a Tecla ENTER para cada medida:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\n \n Dadas as medidas: %d, %d, %d, temos um triangilo: ", a, b, c);
        if (a == b && a == c)
        {
            printf("Este é um triangulo Equilatero! \n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Este é um triangulo Isosceles! \n");
        }
        else
            printf("Este é um triangulo Escaleno! \n");
    }
    else
        printf("\n\n As medidas fornecidas, %d,%d,%d nao formam um triangulo", a, b, c);
    return 0;
}