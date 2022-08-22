#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetor[5], a;
    int c, j=4;
    printf("\nDigite uma palavra:");
    for(c=0;c<5;c++){
        scanf("%c", &vetor[c]);
    }
    for(c=0;c<2;c++){
            a=vetor[c];
            vetor[c]=vetor[j];
            vetor[j]=a;
            j--;
        }
    printf("Palavra ao contrario = ");
    for(c=0;c<5;c++){
        printf("%c", vetor[c]);
    }
}
