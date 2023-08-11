#include <stdio.h>

int main(void) {
    int contador;
    printf("\nDigite um número para contagem regressiva: ");
    scanf("%d", &contador);
    
    for (; contador >= 1; contador--) {
        printf("%d ", contador); // Adicionei um espaço após %d para separar os números
    }
    
    printf("\n"); // Adicionei uma quebra de linha para melhorar a saída
    return 0;
}