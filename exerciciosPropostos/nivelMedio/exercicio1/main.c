#include <stdio.h>

float real;
float cotacaoDollar;

int main()
{

    // entrada de dados
    printf("Digite o valor em R$ a ser convertido: ");
    scanf(" %f", &real);

    printf("Digite a cotação atual do dollar: ");
    scanf(" %f", &cotacaoDollar);

    // convertendo real para dollar
    float realConvertidoADollar = real * cotacaoDollar;

    // saida de dados
    printf("R$%.2f com a cotaço do dollar em $%.2f representa R$%.2f", real, cotacaoDollar, realConvertidoADollar);

    return 0;
}