#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Do funkcji isprint() i isspace() */

int main()
{
    char ch;
    int enterCounter = 0, spaceCounter = 0, otherCounter = 0;

    while((ch = getchar()) != '#') {
        if (isspace(ch))
            if (isprint(ch))
                spaceCounter++;
            else
                enterCounter++;
        else
            otherCounter++;
    }
    printf("Liczba znak\242w nowej linii: %d\nLiczba spacji: %d\nLiczba pozosta\210ych znak\242w: %d", enterCounter, spaceCounter, otherCounter);

    getchar();
    return 0;
}

