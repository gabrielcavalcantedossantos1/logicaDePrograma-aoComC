#include <stdio.h>

// declaraçao das variaveis
float nota1, nota2, nota3, nota4;

int main()
{
    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf(" %f", &nota1);

    printf("Digite a segunda nota: ");
    scanf(" %f", &nota2);

    printf("Digite a terceira nota: ");
    scanf(" %f", &nota3);

    printf("Digite a quarta nota: ");
    scanf(" %f", &nota4);

    float result = (nota1 + nota2 + nota3 + nota4) / 4;

    // saida dos dados
    printf("A soma das 4 notas é igual a %.1f pontos", result);
}