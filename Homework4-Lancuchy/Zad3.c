#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;
    printf("Podaj liczb\251 zmiennoprzecinkow\245.\n");
    scanf("%f", &liczba);
    printf("a) Wpisano liczb\251 %.1f lub %.1e\n", liczba, liczba);
    printf("b) Wpisano liczb\251 %+.3f lub %.3E\n", liczba, liczba);
    return 0;
}
