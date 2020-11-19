#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int userAge;
    printf("Podaj swoj wiek w latach\n");
    scanf("%d", &userAge);
    printf("Zyjesz na tym swiecie juz %0.0f sekund!\n", userAge * 3.156e7);

    getchar();
    return 0;
}
