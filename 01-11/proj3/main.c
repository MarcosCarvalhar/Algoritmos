#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6], a;
    int c;
    for(c=0;c<6;c++){
        printf("\nDigite um valor:");
        scanf("%d", &vetor[c]);
    }
    for(c=0;c<3;c++){
            a=vetor[c];
            vetor[c]=vetor[c+3];
            vetor[c+3]=a;
        }
    for(c=0;c<6;c++){
        printf("Vetor %d = %d\n", c, vetor[c]);
    }
}

