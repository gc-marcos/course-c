#include <stdio.h>

int main(void) {
    int contador;
    printf("\nDigite um número para contagem regressiva: ");
    scanf("%d", &contador);
    
    for (contador; contador >= 1; contador--) {
        printf("%d ", contador); 
    }
    
    printf("\n"); 
    return 0;
}