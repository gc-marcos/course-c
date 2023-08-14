#include <stdio.h>
main()
{
    int w;
    for (w = 1; w <= 15; w++)
    {
        if (w == 8)
        {
            break;
        }
        printf("%d", w);
    }
    printf("\n \n Parar a condição de repetição w = %d \n ", w);
    return 0;
}
