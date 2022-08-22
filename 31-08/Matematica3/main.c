#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, denominador, resultado, raiz;
    printf("Digite o valor a ser calculado:");
    scanf("%f", &valor);
    printf("Digite a raiz:");
    scanf("%f", &denominador);
    raiz=1/denominador;
    resultado=pow(valor, raiz);
    printf("Resultado = %f", resultado);
}
