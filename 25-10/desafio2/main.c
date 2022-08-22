#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v=0, c, m=0;
    float vetor[3];
    for(c=0;c<15;c++){
        printf("Digite um numero:");
        scanf("%d", &n);
        m=m+n;
        if((c==4)||(c==9)||(c==14)){
            vetor[v]=m/5;
            v=v+1;
            m=0;
        }
    }
    printf("Vetor 0 = %.2f\nVetor 1 = %.2f\nVetor 2 = %.2f", vetor[0], vetor[1], vetor[2]);
}
