#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[20], nazwisko[20];

    printf("Podaj imi\251.\n");
    scanf("%s", &imie);
    printf("Podaj nazwisko.\n");
    scanf("%s", &nazwisko);

    printf("\n%s %s\n", imie, nazwisko);
    printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

    printf("\n%s %s\n", imie, nazwisko);
    printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

    return 0;
}
