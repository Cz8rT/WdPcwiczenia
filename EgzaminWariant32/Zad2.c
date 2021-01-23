#include <stdio.h>
#include <stdlib.h>

int main()
{
    float array[10];
    float userNumber;
    int licznik = 0;

    while(licznik < 10) {
        printf("Podaj liczbe nr %d do tablicy: ", licznik + 1);
        scanf("%f", &userNumber);
        array[licznik] = userNumber;
        licznik++;
    }

    for(int i = 0; i < 10; i++){
        if(i % 2 != 0) {
            printf("Liczba %.2f o nieparzystym indeksie %d\n", array[i], i);
        }
    }

    printf("\n");
    return 0;
}
