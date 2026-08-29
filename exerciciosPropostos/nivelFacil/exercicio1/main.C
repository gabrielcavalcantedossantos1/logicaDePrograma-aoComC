#include <stdio.h>

// declaraçao das variaveis
char nome[10];
char curso[80];
int anoDeIngresso;

int main()
{
    // entrada de dados
    printf("Digite o seu Nome: ");
    scanf(" %s", nome);

    printf("Digite o nome do seu curso: ");
    scanf(" %s", curso);

    printf("Digite o ano que você ingressou na universidade: ");
    scanf(" %d", &anoDeIngresso);

    // saida de dados
    printf("Nome do aluno: %s\nNome do curso: %s\nAno que ingressou na universidade: %d", nome, curso, anoDeIngresso);

    return 0;
}