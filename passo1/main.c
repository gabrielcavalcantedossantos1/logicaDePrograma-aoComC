#include <stdio.h>

// eu devo declarar os parametros/prototipo da função se ela for usada abaixo do main
int soma(int n1, int n2);

int main()
{
    printf("Olá, mundo! Seja bem-vindo à aula de C.\n");
    printf("Resultado: %d\n", soma(3, 7));
    return 0;
}

int soma(int n1, int n2)
{
    int result = n1 + n2;
    return result;
}