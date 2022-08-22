#include <stdio.h>
#include <stdlib.h>


int cima(int pI){
    int resultado;
    resultado = pI - 1;
    return resultado;
}
int baixo(int pI){
    int resultado;
    resultado = pI + 1;
    return resultado;
}
int esquerda(int pI){
    int resultado;
    resultado = pI - 10;
    return resultado;
}
int direita(int pI){

    int resultado;
    resultado = pI + 10;
    return resultado;
}
int main(){

    int pI, mov, pAtual;//Declara as variaveis posicaoInicial, movimento e posicaoAtual
    printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
    printf("Digite a posicao inicial:");
    scanf("%d", &pI);
        switch(pI){
        case 0:
            printf("\n--  10  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 10:
            printf("\n00  --  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 20:
            printf("\n00  10  --  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 30:
            printf("\n00  10  20  --\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 1:
            printf("\n00  10  20  30\n--  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 11:
            printf("\n00  10  20  30\n01  --  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 21:
            printf("\n00  10  20  30\n01  11  --  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 31:
            printf("\n00  10  20  30\n01  11  21  --\n02  12  22  32\n03  13  23  33\n");
            break;
        case 2:
            printf("\n00  10  20  30\n01  11  21  31\n--  12  22  32\n03  13  23  33\n");
            break;
        case 12:
            printf("\n00  10  20  30\n01  11  21  31\n02  --  22  32\n03  13  23  33\n");
            break;
        case 22:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  --  32\n03  13  23  33\n");
            break;
        case 32:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  --\n03  13  23  33\n");
            break;
        case 3:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n--  13  23  33\n");
            break;
        case 13:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n03  --  23  33\n");
            break;
        case 23:
            printf("\n00  10  20  30\n01  11  21  --\n02  12  22  32\n03  13  --  33\n");
            break;
        case 33:
            printf("\n00  10  20  30\n01  11  21  --\n02  12  22  32\n03  13  23  --\n");
            break;
        }
    printf("\nAgora movimente-se utilizando as teclas 2, 4, 8, 6 ou digite 0 para sair:");
    scanf("%d", &mov);

    while(mov!=0){
        switch(mov){
        case 2:
            pAtual=baixo(pI);
            break;

        case 8:
            pAtual=cima(pI);
            break;

        case 6:
            pAtual=direita(pI);
            break;
        case 4:
            pAtual=esquerda(pI);
            break;
        }
        pI=mov;
        switch(pAtual){
        case 0:
            printf("\n--  10  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 10:
            printf("\n00  --  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 20:
            printf("\n00  10  --  30\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 30:
            printf("\n00  10  20  --\n01  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 1:
            printf("\n00  10  20  30\n--  11  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 11:
            printf("\n00  10  20  30\n01  --  21  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 21:
            printf("\n00  10  20  30\n01  11  --  31\n02  12  22  32\n03  13  23  33\n");
            break;
        case 31:
            printf("\n00  10  20  30\n01  11  21  --\n02  12  22  32\n03  13  23  33\n");
            break;
        case 2:
            printf("\n00  10  20  30\n01  11  21  31\n--  12  22  32\n03  13  23  33\n");
            break;
        case 12:
            printf("\n00  10  20  30\n01  11  21  31\n02  --  22  32\n03  13  23  33\n");
            break;
        case 22:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  --  32\n03  13  23  33\n");
            break;
        case 32:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  --\n03  13  23  33\n");
            break;
        case 3:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n--  13  23  33\n");
            break;
        case 13:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n03  --  23  33\n");
            break;
        case 23:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n03  13  --  33\n");
            break;
        case 33:
            printf("\n00  10  20  30\n01  11  21  31\n02  12  22  32\n03  13  23  --\n");
            break;
        }
        printf("Movimente-se utilizando as teclas 2, 4, 8, 6 ou digite 0 para sair:");
        scanf("%d", &mov);
    }
}
