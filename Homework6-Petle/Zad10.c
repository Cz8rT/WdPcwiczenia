#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dlugoscCiagu;
    double ciag1, ciag2;

    printf("Podaj d\210ugo\230\206 ci\245gu: ");
    scanf("%d", &dlugoscCiagu);

    for(int i = 1; i <= dlugoscCiagu; i++){
        ciag1 = ciag1 + 1 / (double)i;
        if(i % 2 == 0){
            ciag2 = ciag2 - 1 / (double)i;
        } else {
            ciag2 = ciag2 + 1 / (double)i;
        }
    }

    printf("Wynik pierwszego ci\245gu: %f", ciag1);
    printf("\nWynik drugiego ci\245gu: %f\n", ciag2);

    getchar();
    return 0;
}

