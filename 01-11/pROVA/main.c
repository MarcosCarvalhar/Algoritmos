#include <stdio.h>
#include <stdlib.h>

//Dado dois vetores de dez posiçoes, junte eles num vetor de 20 posiçoes

int main()
{
    int vet1[10], vet2[10], vet12[20];
    int c, j=0;
    for(c=0;c<10;c++){
        printf("Vetor 1 (%d/9) =", c);
        scanf("%d", &vet1[c]);
    }

    printf("\n\n");
    for(c=0;c<10;c++){
        printf("Vetor 2 (%d/9) =", c);
        scanf("%d", &vet2[c]);
    }

    c=0;
    while(c<20){
        vet12[j]=vet1[c];
        vet12[j+1]=vet2[c];
        c++;
        j=j+2;

    }

    printf("\n\nVetor 1 e 2:\n\n");
    for(c=0;c<20;c++){
    printf("Posicao %d = %d\n", c, vet12[c]);
    }
}
