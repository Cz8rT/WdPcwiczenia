#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int userASCII;

    printf("Podaj kod ASCII\n");
    scanf("%d", &userASCII);
    printf("Podanemu kodowi ASCII '%d' odpowiada znak '%c'\n", userASCII, userASCII);

    getchar();
    return 0;
}
