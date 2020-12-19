#include <stdio.h>
#include <stdlib.h>

int main()
{

    float luckyJimInvest = 0.08;
    float luckyJimMoney = 1000000;
    int years = 0;

    while(luckyJimMoney >= 0){

        luckyJimMoney = (luckyJimMoney + luckyJimMoney * luckyJimInvest) - 100000;
        printf("Stan konta: %.2f$\n", luckyJimMoney);
        years++;

    }

    printf("\nKonto Szcz\251\230ciarza Jima b\251dzie puste po %d latach.\n", years);

    getchar();
    return 0;
}

