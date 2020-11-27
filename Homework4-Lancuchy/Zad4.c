#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wzrost;
    char imie[20];
    printf("Podaj Tw\242j wzrost w centymetrach.\n");
    scanf("%f", &wzrost);
    printf("Podaj imi\251.\n");
    scanf("%s", &imie);
    printf("\n%s, masz %.2f metra wzrostu.\n", imie, wzrost / 100);
    return 0;
}
