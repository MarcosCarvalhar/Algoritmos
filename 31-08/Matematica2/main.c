#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, expoente, resultado;
    printf("Digite uma base e um expoente:");
    scanf("%d %d", &base, &expoente);
    resultado=pow(base, expoente);
    printf("O resultado e:%d", resultado);
}
