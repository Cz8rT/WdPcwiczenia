#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Do funkcji isdigit() */

int main()
{
    char ch;
    char prevCh;
    int anCounter = 0;

    printf("Podaj znaki. Program zliczy wyst\245pienia 'an'. '#' zako\344czy program!\n");
    while((ch = getchar()) != '#') {
        if(ch == 'n' && prevCh == 'a')
            anCounter++;
        prevCh = ch;
    }
    printf("\nLiczba wyst\245pie\344 'an': %d\n", anCounter);
    getchar();
    return 0;
}

