#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float userNumber;
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    scanf("%f", &userNumber);
    printf("Podana liczba to %f lub %e\n", userNumber, userNumber);

    getchar();
    return 0;
}
