#include <stdio.h>

// declaraçao de variaveis
int a, b;

int main()
{
    // entrada de dados
    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    printf("Valores originais\na = %d\nb = %d\n", a, b);

    // logica

    // faz com que ambos os numeros estejam em apenas uma variavel
    a = a + b;

    // faz com que agora o b seja o resultado da soma das variaveis menos a antiga b
    b = a - b;

    // faz com que agora o a seja o resultado da soma das variaveis menos a antiga b(que agora é a soma das variaveis menos o b)
    a = a - b;

    printf("Valores Trocados\na = %d\nb = %d", a, b);
    return 0;
}