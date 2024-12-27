#include <stdio.h>

int main () {
    float idade;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
if (idade >= 18)
{
    printf("Você Já pode tirar sua carteira, você é maior de 18 anos");
}
else {
    printf("Voce não pode ter habilitação");
}

float orcamento;
printf("\n Digite o valor do orçamento: R$  ");
scanf("%f", &orcamento);
if (orcamento >= 10000)
{
    printf("\n Jaão e Maria pode viajar");
}
else {
    printf("João e Maria não pode viajar");
}

return 0;

}