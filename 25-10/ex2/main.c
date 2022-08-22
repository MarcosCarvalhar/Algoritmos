#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, cont, vet[15];

    for (cont=0; cont<15; cont++){
        n=n+3;
        vet[cont]=n;
    }

    printf("Indice          Valor\n");
    for (cont=0; cont<15; cont++){
        printf("%i                 %i\n", cont, vet[cont]);
    }

    return 0;
}
