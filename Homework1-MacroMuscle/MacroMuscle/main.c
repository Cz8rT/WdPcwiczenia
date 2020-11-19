#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    bool endProgram = false;
    int convertion;
    float value, result;
    float multiply (float, float);
    bool nextCalculation(void);

    printf("Witaj w MacroMuscle!\n");

    while (endProgram == false) {
        printf("\nWybierz opcje przeliczania:\n");
        printf("1. Cale na centymetry\n");
        printf("2. Centymetry na cale\n");

        scanf("%d", &convertion);

        if (convertion == 1) {

            fflush(stdin);
            printf("Podaj wartosc, ktora chcesz przeliczyc: ");
            scanf("%f", &value);
            result = multiply(value, 2.54);
            printf("Wynik przeliczenia w centymetrach: %.2f \n\n", result);
            fflush(stdin);

            endProgram = nextCalculation();

        } else if (convertion == 2) {

            fflush(stdin);
            printf("Podaj wartosc, ktora chcesz przeliczyc: ");
            scanf("%f", &value);
            result = multiply(value, 1/2.54);
            printf("Wynik przeliczenia w calach: %.2f \n\n", result);
            fflush(stdin);

            endProgram = nextCalculation();

        } else {
            printf("Podano bledna wartosc\nPodaj '1' lub '2', by wybrac odpowiednia konwersje!\n");
            fflush(stdin);
        }
    }

    getchar();
    return 0;
}

float multiply (float a, float b) {
    return a * b;
}

bool nextCalculation(void) {

    char userResponse;
    printf("Czy chcesz przeliczyc kolejna wartosc? y/n: ");
    scanf("%c", &userResponse);
    if (userResponse != 121) {
            return true;
    }
    fflush(stdin);
    return false;
}
