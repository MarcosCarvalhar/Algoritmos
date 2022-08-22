#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q, c;
    for(c=0;c<10;c++){
        printf("Digite um valor:\n");
        scanf("%d", &n);
        q=n*n;
        printf("o quadrado de %d e = %d\n", n, q);
    }
}
