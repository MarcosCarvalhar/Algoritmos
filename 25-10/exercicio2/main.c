#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15];
    int c, v=0;
    for(c=0;c<15;c++){
        v=v+3;
        vetor[c]=v;
        printf("Posicao %d = %d\n", c, vetor[c]);
    }

}
