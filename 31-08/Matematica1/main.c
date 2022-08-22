#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero, modulo;
    printf("Digite um numero para obter o seu modulo:");
    scanf("%f", &numero);
    modulo=abs(numero);
    printf("O modulo do numero %f = %f", numero, modulo);
}
