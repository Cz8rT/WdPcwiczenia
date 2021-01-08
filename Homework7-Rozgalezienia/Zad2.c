#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Do funkcji isprint() i isspace() */

int main()
{
    char ch;
    int charCounter = 0;

    printf("Wpisz znaki, by wy\230wietli\206 je wraz z kodem ASCII. '#' zako\344czy program!\n");
    while((ch = getchar()) != '#') {
        charCounter++;
        putchar(ch);
        printf(" [%d]  ", ch);
        if (charCounter % 8 == 0)
            printf("\n");
    }

    getchar();
    return 0;
}

