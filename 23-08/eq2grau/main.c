#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
    while(contador<3){
        int a, b, c;
        printf("\nInsira os valores de a, b e c respectivamente:");
        scanf("%d %d %d", &a, &b, &c);
        int delta, r1, r2;
        delta=(b*b)-(4*a*c);

        if(delta<0){
            printf("Nao existem raizes");
        }else
        if(delta==0){
            r2=-b-(sqrt(delta))/(2*a);
            printf("\nRaiz=%d", r2);
        }else{
        r1=(-b+sqrt(delta))/(2*a);
        r2=(-b-sqrt(delta))/(2*a);
        printf("\nRaizes=%d; %d", r1, r2);
        contador++;
        }
    }
}
