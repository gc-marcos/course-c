#include <stdio.h>

int main(int, char) {
    float salario, inss, ir, sal_liquido;

    printf("Digite seu salario bruto R$ ");
    scanf("%f", &salario);

    if(salario <= 1693.72) {
        inss = salario * 0.08;
    }
    else
    if(salario >= 1693.73 && salario <= 2822.90) {
        inss = salario * 0.09;
    }
    else
    if(salario >= 2822.91 && salario <= 5646.80) {
        inss = salario * 0.11;
    }
    else 
    if(salario >= 5646.81) {
    inss =  621.04;
    }  
    sal_liquido = (salario - inss) - ir;
    printf("\n Desconto do INSS: R$ %2.f", inss);
    printf("\n Salario liquido %2.f", sal_liquido);
    return 0;
}
