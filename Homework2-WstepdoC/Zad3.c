#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int ageInDays;
    printf("Podaj swoj wiek\n");
    scanf("%d", &age);
    ageInDays = age*365;
    printf("Twoj wiek wyrazony w dniach to: %d\n", ageInDays);
    getchar();
    return 0;
}
