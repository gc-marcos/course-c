#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defina a estrutura Dados antes de usar a função
typedef struct Dados {
    char *prod;
    int numpro;
    struct Dados *proximo;
} Dados;

// Corrija o tipo de retorno da função
Dados *inicia_listaMerc(char *prod, int numpro) {
    Dados *novo;

    novo = (Dados *)malloc(sizeof(Dados));

    novo->prod = (char *)malloc(strlen(prod) + 1);
    strncpy(novo->prod, prod, strlen(prod) + 1);
    novo->numpro = numpro;
    novo->proximo = NULL;

    return novo;
}

int main() {
    // Exemplo de uso da função
    Dados *produto = inicia_listaMerc("Produto A", 123);
    
    // ... faça algo com o nó do produto ...

    // Lembre-se de liberar a memória quando não for mais necessária
    free(produto->prod);
    free(produto);

    return 0;
}

