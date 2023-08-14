#include <stdio.h>

int main(int, char)
{
    int i;
    do
    {
        printf("\t (1)....Morango \n");
        printf("\t (2)....Leite \n");
        printf("\t (3)....Flocos");
        printf("\n Digite o numero de seu sabor: ");
        scanf("%d", &i);
    } while ((i < 1) || (i > 3));
    switch(i){
       case 1:
       printf("\t Escolheu Morango!");
       break;
       case 2:
       printf("\t Escolheu de Leite!");
       break;
       case 3:
       printf("\t Escolheu de Flocos");
       break;
    }
    
    return 0;
}