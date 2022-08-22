#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, vet[20];
    printf("Digite 20 valores:\n");

    for (n=0; n<20; n++){
        scanf("%i", &vet[n]);
    }
    printf("\nDigite o indice que se deseja pesquisar o valor:");
    scanf("%i", &x);
    while ((x>0) && (x<20)){
        printf("O valor armazenado neste indice eh %i", vet[x]);
        printf("\nDigite o indice que se deseja pesquisar o valor:");
        scanf("%i", &x);
    }
    return 0;
}
