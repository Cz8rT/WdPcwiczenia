#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[20];
    printf("Podaj swoje imi\251.\n");
    scanf("%s", &imie);
    printf("\n\"%s\"\n", imie);
    printf("\n\"%20s\"\n", imie);
    printf("\n\"%-20s\"\n", imie);
    printf("\n\"%*s\"\n", strlen(imie) + 3,imie);
    return 0;
}
