#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[20], nazwisko[20];
    printf("Podaj swoje imi\251.\n");
    scanf("%s", &imie);
    printf("Podaj swoje nazwisko.\n");
    scanf("%s", &nazwisko);
    printf("\n%s %s\n", nazwisko, imie);
    return 0;
}
