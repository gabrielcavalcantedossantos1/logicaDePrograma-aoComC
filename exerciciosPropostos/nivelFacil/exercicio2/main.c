#include <stdio.h>

// declaraçao de variaveis
int numero1;
int numero2;

int main()
{
    // entrada de dados
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);

    int resposta = numero1 + numero2;

    printf("A soma de %d e %d é igual a %d!", numero1, numero2, resposta);

    return 0;
}