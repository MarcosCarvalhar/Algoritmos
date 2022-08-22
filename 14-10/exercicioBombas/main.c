#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int l, c, tc, tl;
    char tnv;

    printf(" *  *  *\n");
    printf(" *  *  *\n");
    printf(" *  *  *\n");
    printf(" *  *  *\n\n");

    srand(time(NULL));
    tl = rand() % 4 + 1;
    tc = rand() % 3 + 1;
    printf("%d %d", tl, tc);
    printf("Voce so possui duas chances.\n\n");
    printf("Escolha uma posicao: linhas:  ");
    scanf("%i", &l);
    printf("\n                     colunas:  ");
    scanf("%i", &c);

    if((l==tl)&&(c==tc)){
        printf("\nVoce encontrou a bomba!\n");
        printf("Voce Venceu!\n");
    }else if((l>4)||(c>4)||(l<1)||(c<1)){
        printf("\nlinhas/colunas inexistentes!");
        system("PAUSE");
        system("CLS");
        return main();
    }else{
        printf("\nVoce nao encontrou a bomba\n");
        printf("Deseja tentar novamente?");
        scanf(" %c", &tnv);
        if(tnv=='s'){
            printf("\nEscolha uma posicao: linhas:  ");
            scanf("%i", &l);
            printf("\n                     colunas:  ");
            scanf("%i", &c);

            if((l==tl)&&(c==tc)){
                printf("\nVoce encontrou a bomba!\n");
                printf("Voce Venceu!\n");
            }else if((l>4)||(c>3)||(l<1)||(c<1)){
                printf("\nlinhas/colunas inexistentes!");return 0;
                system("PAUSE");
                system("CLS");
                return main;
            }else{
                printf("\nVoce nao encontrou a bomba\n");
                printf("Game Over!\a");
                }
                }else{
                    printf("\nGame Over!\a");
                }
    }

    return 0;
}
