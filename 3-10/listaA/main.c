#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, opcao;
    printf("Digite o dia da semana sendo:\n Dia 1 = Domingo \n Dia 2 = Segunda \n Dia 3 = Terca \n Dia 4 = Quarta \n Dia 5 = Quinta \n Dia 6 = Sexta \n Dia 7 = Sabado");
    scanf("%d", &dia);
    printf("\n\nDigite o dia do mes:");
    scanf("%d", &mes);

    if((dia==1)||(dia==7)){
        opcao=1;//sendo opcao 1 fim de semana
    }else{
        if((dia>1)&&(dia<7)){
            opcao=2;//sendo opcao 2 dia de semana
        }else{
            if(dia<1){
                opcao=3;//sendo opcao 3 dia invalido
            }
        }
    }

    switch(dia){
case 1:
    printf("domingo, fin de semana");
    break;

case 2:
    printf("segunda,dia de semana");
    break;

case 3:
    printf("terca,dia de semana");
    break;

case 4:
    printf("quarta,dia da semana");
    break;

case 5:
    printf("quinta,dia da semana");
    break;

case 6:
    printf("sexta,dia de semana");
    break;

case 7:
    printf("sabado,fin de semana");
    break;

    default:
    printf("oxi");
    }
}
