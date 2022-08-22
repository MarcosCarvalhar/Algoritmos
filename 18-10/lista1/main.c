#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10], vetor2[10], vetor3[10], i;
    for(i=0;i<10;i++){
        printf("\nDigite um valor para o primeiro vetor:");
        scanf("%d", &vetor1[i]);
        printf("\nDigite um valor para o segundo vetor:");
        scanf("%d", &vetor2[i]);
        vetor3[i]=vetor1[i]+vetor2[i];
        printf("\n\nVetor 3=%d", vetor3[i]);
    }
}
