#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userDays, weeks, days;

    printf("Podaj liczb\251 dni.\n");
    scanf("%d", &userDays);

    weeks = userDays / 7;
    days = userDays % 7;

    printf("\n%d dni to %d tygodni i %d dni.\n", userDays, weeks, days);

    getchar();
    return 0;
}
