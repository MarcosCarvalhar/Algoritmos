#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[16], a;
    int c;
    for(c=0;c<16;c++){
        printf("\nDigite um valor:");
        scanf("%d", &vetor[c]);
    }
    for(c=0;c<8;c++){
            a=vetor[c];
            vetor[c]=vetor[c+8];
            vetor[c+8]=a;
        }
    for(c=0;c<16;c++){
        printf("Vetor %d = %d\n", c, vetor[c]);
    }
}
