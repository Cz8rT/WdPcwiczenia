#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ewaInvest = 0.10;
    float kasiaInvest = 0.05;
    float basicMoney = 100;
    float ewaMoney = basicMoney;
    float kasiaMoney = basicMoney;
    int years = 0;

    while(ewaMoney >= kasiaMoney){

        ewaMoney = ewaMoney + basicMoney * ewaInvest;
        kasiaMoney = kasiaMoney + kasiaMoney * kasiaInvest;
        years++;

    }

    printf("Inwestycja Kasi przekroczy warto\230\206 inwestycji Ewy po %d latach.\n", years);
    printf("Warto\230\206 inwestycji Ewy: %.2fz\210\n", ewaMoney);
    printf("Warto\230\206 inwestycji Kasi: %.2fz\210\n", kasiaMoney);

    getchar();
    return 0;
}

