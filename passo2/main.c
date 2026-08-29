#include <stdio.h>

// declaraçao de variaveis
int quantidade, clientes;
float preco;

int main()
{
    quantidade = 3;
    preco = 10.99;

    printf("No estoque temos %d\nNo preço de:  %.2f", quantidade, preco);
    return 0;
}