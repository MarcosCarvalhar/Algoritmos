#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pGas, con;
    printf("Digite o preco da gasolina:");
    scanf("%f", &pGas);
    float pAlc;
    printf("\nDigite o preco do alcool:");
    scanf("%f", &pAlc);
    con=pGas/7000;
    if(con>=pAlc){
        printf("\nA gasolina e mais rentavel");
    }else{
        printf("\nO alcool e mais rentavel");
    }
}
