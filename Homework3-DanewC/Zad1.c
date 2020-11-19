#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number1 = 2147483647;
    float number2 = 1.0e38f;
    float number3 = 1.0e-6f;

    printf("Number1 - %d, number2 - %f, number3 - %f\n", number1 + 1, number2 * 1000.0f, number3 / 10);
    // number1 + 1 po przekroczeniu zakresu zaczyna liczyc od -2147483648.
    // number2 * 1000.0f zwraca wartosc 1.#INF00
    // number3 / 10 zwraca wartosc 0.000000
    getchar();
    return 0;
}
