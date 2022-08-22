#include <stdio.h>
#include <stdlib.h>
void maior(int indice1, int indice2, int m1, int m2){
    printf("\n\nJogos com maior numero de downloads:\n\n");
    if(indice1==0){
        printf("1-Clash Royale=%d", m1);
    }else
    if(indice1==1){
        printf("1-Bomb Beach=%d", m1);
    }else
    if(indice1==2){
        printf("1-Clash of Clans=%d", m1);
    }else
    if(indice1==3){
        printf("1-Hay Day=%d", m1);
    }
    if(indice2==0){
        printf("\n2-Clash Royale=%d", m2);
    }else
    if(indice2==1){
        printf("\n2-Bomb Beach=%d", m2);
    }else
    if(indice2==2){
        printf("\n2-Clash of Clans=%d", m2);
    }else
    if(indice2==3){
        printf("\n2-Hay Day=%d", m2);
    }
}
int main()
{
    int games[4], c, j=1, m1=0, m2=0, indice1=-1, indice2=-1;
    printf("Jogos da SuperCell:\n1-Clash Royale\n2-Bomb Beach\n3-Clash of Clans\n4-Hay Day");
    for(c=0;c<4;c++){
        printf("\n\nDigite o numero de downloads pro %d jogo:", j);
        j++;
        scanf("%d", &games[c]);
        if(games[c]>m1){
            indice2=indice1;
            indice1=c;
            m2=m1;
            m1=games[c];
        }else{
            if((m2<games[c])&&(m2<m1)){
                m2=games[c];
                indice2=c;
            }
        }
    }
    printf("\n\nJogos da SuperCell e numero de downloads:\n1-Clash Royale=%d\n2-Bomb Beach=%d\n3-Clash of Clans=%d\n4-Hay Day=%d", games[0], games[1], games[2], games[3]);

    maior(indice1, indice2, m1, m2);
}
