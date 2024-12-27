#include <stdio.h>
#include <stdlib.h>
main()
{
float mt1, mt2, resultado;
int resp;
mt1 = 0;
mt2 = 0;
resultado = 0;
do {
    printf("Calculo de Metros Quadrados");
    printf("\n \n Digite a primeira medida: ");
    scanf("%f", &mt1);
    printf("\n Digite a segunda medida: ");
    scanf("%f", &mt2);
    resultado = (mt1 * mt2);
    printf("\n \n Tem %.2f em metros quadrado.", resultado);
    printf("\n \n Digite 1 para continuar e 2 para sair \n");
    scanf("%d", &resp);
}while (resp==1);
    return 0;
}