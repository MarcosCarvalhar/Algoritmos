#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, valor[10], c;
    for(c=0;c<10;c++){
        printf("Digite um valor pro vetor %d:", c);
        scanf("%d", &valor[c]);
        soma=soma+valor[c];
    }
    printf("A soma de todos os vetores = %d", soma);
}
