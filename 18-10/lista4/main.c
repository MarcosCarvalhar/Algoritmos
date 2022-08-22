#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorSenha[8], vetorEnt[8], c, sf;
    vetorSenha[0]=3;
    vetorSenha[1]=6;
    vetorSenha[2]=9;
    vetorSenha[3]=1;
    vetorSenha[4]=4;
    vetorSenha[5]=7;
    vetorSenha[6]=2;
    vetorSenha[7]=5;

    sf=0;
    while(c<7){
        for(c=0;c<8;c++){
            if(sf!=0){
                c=0;
            }
            scanf("%d", &vetorEnt[c]);
            if(vetorEnt[c]==vetorSenha[c]){
                sf=0;
            }else{
                printf("\nSenha incorreta, comece novamente.\n");
                sf=1;
            }
        }
    }
    printf("\nSenha correta!");
}
