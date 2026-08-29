#include <stdio.h>

// variaveis
float km;
float litros;

int main()
{
    // entrada de dados
    printf("Informe a distancia percorrida(KM): ");
    scanf(" %f", &km);

    printf("Informe quantos litros foram usados(L): ");
    scanf(" %f", &litros);

    // logica
    float consumo = km / litros;

    // saida de dados
    printf("um veiculo que percorre %.1fKM com %.1fL, tem o consumo medio de %.1fKM/L", km, litros, consumo);

    return 0;
}