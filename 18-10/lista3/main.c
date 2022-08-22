#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20], i, m;
    printf("\nDigite um valor para o vetor[0]:");
    scanf("%d", &vetor[0]);
    m=vetor[0];
    for(i=1;i<20;i++){
        printf("\nDigite um valor para o vetor[%d]:", i);
        scanf("%d", &vetor[i]);
        if(m>vetor[i]){
            m=vetor[i];
        }
    }
    printf("O menor vetor eh:%d", m);
}
