#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20], c, i, o, n, r=0;
    for(c=0;c<20;c++){
        vetor[c]=c;
    }
    printf("Digite sua opcao:\n1-Informar o valor de um vetor especifico\n2-Informar se um valor especifico existe ou nao no vetor\n\n");
    printf("Opcao:");
    scanf("%d", &o);

    switch(o){

    case 1:
        printf("Digite o indice a ser procurado:");
        scanf("%d", &i);

        while((i<20)&&(i>=0)){
            printf("O valor desse indice e:%d", vetor[i]);
            printf("\n\nDigite o indice a ser procurado:");
            scanf("%d", &i);
        }
        break;

    case 2:
        printf("Digite um numero inteiro:");
        scanf("%d", &n);
        for(i=0;i<20;i++){
            if(n==vetor[i]){
                printf("O elemento existe entre os vetores.");
                r=r+1;
            }
        }
        printf("O elemento se repete %d vezes", r);
    }





}
