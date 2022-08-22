#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, vet [10];
    printf("Digite 10 numeros\n");

    for (n=0; n<10; n++){
        scanf("%i", &vet[n]);
    }

    for (n=0; n<10; n++){
            if (vet[n] % 2 == 0){
                printf("\nO %i eh par.", vet[n]);
            }
    }
    return 0;
}
