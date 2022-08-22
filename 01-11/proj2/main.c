#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6], a=5, soma;
    int c;
    for(c=0;c<6;c++){
        printf("\nDigite um valor:");
        scanf("%d", &vetor[c]);
    }
    for(c=0;c<3;c++){
        soma=vetor[c]+vetor[a];
        printf("\nSoma vetores %d e %d = %d", c, a, soma);
        a=a-1;
    }

}
