#include <stdio.h>

// requisitos do exercicio

// solicitar um numero inteiro ao usuario
// deve exibir 1 para verdadeiro ou 0 para falso
// verificar se o numero é maior ou igual a 10 ou menor ou igual a 100 e se é par

// declaraçao de variaveis
int numero;

int main()
{
    // entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // logica do programa
    int verificaçao = (numero >= 10) && (numero <= 100) && (numero % 2 == 0);

    // saida de dados
    printf("O numero %d %s aos parametros (ser maior ou igual a 10, ser menor ou igual a 100 e ser um numero par)", numero, verificaçao == 0 ? "não atende" : "atende");

    return 0;
}