#include <stdio.h>
main() {
    int i;
    for (i = 7; i <= 100; i = i + 1)
    if (i == 15)
    break;
    else
    if (i % 2 == 1)
    continue;
    else 
    printf("%2d\n", i);
    printf("Termino do laço");
}
