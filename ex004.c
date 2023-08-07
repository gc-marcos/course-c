#include <stdio.h>
int main() {
    char x;
    float valor, desc, total;
    printf("\n Didite o valor da compra: R$ ");
    scanf("%f", &valor);
    printf("Digite a letra que representa o valor do desconta: ");
    printf("a. azul\n");
    printf("v. vermelho\n");
    printf("b. branco\n");
    printf("Digite sua opção:");
    scanf("%s", &x);
switch(x) 
    {
        case 'a':
            printf("Você escolheu azul, desconto será de 30 por cento \n");
            desc = valor * 0.30;
            total = valor - desc;
            printf("O valor da sua compra é %.2f\n", total);
            break;
        case 'v':
            printf("Você escolheu vermelho, desconte será de 20 por cento \n");
            desc = valor * 0.20;
            total = valor - desc;
            printf("O valor de sua compra será %.2f\n", total);
            break;
        case 'b':
            printf("Você escolheu branco, desconta será 10 por cento\n");
            desc = valor * 0.10;
            total = valor -  desc;
            printf("O valor de sua compra será %.2f", total);
            break;
        default:
            printf("Opçao invalida!!");

    }
    return 0;
}
    