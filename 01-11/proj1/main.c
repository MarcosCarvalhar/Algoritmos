#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6], a, j=5;
    int c;
    for(c=0;c<6;c++){
        printf("\nDigite um valor:");
        scanf("%d", &vetor[c]);
    }
    for(c=0;c<3;c++){
            a=vetor[c];
            vetor[c]=vetor[j];
            vetor[j]=a;
            j--;
        }
    for(c=0;c<6;c++){
        printf("Vetor %d = %d\n", c, vetor[c]);
    }
}

