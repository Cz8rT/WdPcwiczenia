#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik, suma, ciagObliczen;

    licznik = 0;
    suma = 0;

    printf("Podaj jak d\210ugi ma by\206 ci\245g oblicze\344.\n");
    scanf("%d", &ciagObliczen);

    while(licznik++ < ciagObliczen){
        suma = suma + licznik;
        printf("Suma = %d\n", suma);
    }

    getchar();
    return 0;
}
