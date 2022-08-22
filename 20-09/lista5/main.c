#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,m,c,a;
    printf("Digite um valor:");
    scanf("%d", &n);
    m=n;
    for(c=0;c<9;c++){
        a=n;
        printf("Digite um valor:");
        scanf("%d", &n);
        if(m<=a){
            m=a;
        }
    }
    printf("O maior numero e:%d", m);
}
