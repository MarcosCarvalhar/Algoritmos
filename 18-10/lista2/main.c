#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[30], i;
    for(i=0;i<30;i++){
        printf("\nDigite o numero para cada posicao do vetor:");
        scanf("%d", &vetor[i]);
    }
    while(i!=0){
        i--;
        printf("%d\n", vetor[i]);

    }
}
