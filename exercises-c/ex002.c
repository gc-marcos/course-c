#include <stdio.h>

int main (int argc, char ** argv) {
    float nota1;
    float nota2;
    float media;

    printf("Insira nota 1: ");
    scanf("%f", &nota1);

    printf("\nInsira nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media; %.2f", media);

    return 0;
}