#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int c, p=0;
    for(c=0;c<10;c++){
        printf("\nDigite um numero:");
        scanf("%d", &vetor[c]);
    }
    printf("\n\nAs posicoes pares sao:");
    while(p<10){
        printf("%d ", vetor[p]);
        p=p+2;
    }
}
