#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int cont, numero, novo, maior;
    numero=rand()%100;
    maior=numero;
    for(cont=0;cont<50;cont++){
        novo=numero;
        numero=rand()%100;
        if(novo<=maior){
            maior=novo;
            printf("%d\n", maior);
        }
    }
}
