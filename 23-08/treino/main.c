#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogador1, jogador2, somaJ1=0, somaJ2=0;
    srand(time(NULL));
    int contador=0;
    while(contador<3){
        jogador1=rand()%11;
        printf("Jogador 1=%d    ", jogador1);
        somaJ1=jogador1+somaJ1;
        jogador2=rand()%11;
        printf("Jogador 2=%d\n", jogador2);
        somaJ2=jogador2+somaJ2;
        contador++;
    }
    printf("Soma 1=%d      Soma 2=%d", somaJ1, somaJ2);
    if(somaJ1>21){
        printf("\n\nJogador 2 ganhou!");
    }else
    if(somaJ2>21){
        printf("\n\nJogador 1 ganhou!");
    }else
    if((21-somaJ1)<(21-somaJ2)){
        printf("\n\nJogador 1 ganhou!");
    }else{
        printf("\n\nJogador 2 ganhou!");
    }
}
