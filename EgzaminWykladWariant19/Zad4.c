#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Do funkcji isdigit() */

int main()
{
    char ch;
    float suma = 0;
    int licznik = 0;

    printf("Prosze podawac liczby calkowite z przedzialu 1 do 9. '0' zako\344czy ciag!\n");
    while((ch = getchar()) != '0') {
        if (isdigit(ch)){
            licznik++;
            suma += ch - '0'; /* "ch - '0'" zamienia znak na integer */
        }
    }

    if(licznik != 0) {
        printf("\nSrednia arytmetyczna: %.2f\n", suma/licznik);
    } else {
        printf("\nBrak poprawnych danych do obliczenia sredniej.\n");
    }

    getchar();
    return 0;
}
