#include <stdio.h>
#include <stdlib.h>

double szescian(float); // Funkcja obliczajaca i wyswietlajaca szescian liczby.

int main()
{
    float userNumber;

    printf("Podaj liczb\251 zmiennoprzecinkow\245.\n");
    scanf("%f", &userNumber);

    szescian(userNumber);

    getchar();
    return 0;
}

double szescian(float x) {

    double cube;

    cube = x * x * x;
    printf("Sze\230cian liczby %.3f wynosi %.3f\n", x, cube);

    return 0;
}
