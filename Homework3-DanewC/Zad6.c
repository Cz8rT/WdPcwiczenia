#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float userAmount;
    double moleculeMass = 3.0e-23;
    short oneLitre = 1000;

    printf("Podaj objetosc wody w litrach\n");
    scanf("%f", &userAmount);

    double numOfMolecules = userAmount * oneLitre / moleculeMass;

    printf("W %0.2f litrach wody znajduje sie okolo %0.0f czasteczek.\n", userAmount, numOfMolecules);
    printf("Ta liczba zapisana w notacji wykladniczej to %e.\n", numOfMolecules);

    getchar();
    return 0;
}
