#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x1, x2, delta;

    printf("Prosz\251 poda\206 warto\230\206 wsp\242\210czynnika a: ");
    scanf("%f", &a);
    printf("Prosz\251 poda\206 warto\230\206 wsp\242\210czynnika b: ");
    scanf("%f", &b);

    delta = (b*b) - 4*4*a*8;

    if(a == 0){
        printf("'a' powinno byc rozne od 0!");
    }else if(delta < 0){
        printf("Rownanie nie ma rozwiazan.");
    } else {
        x1 = (-b-sqrt(delta))/(2*4*a);
        x2 = (-b+sqrt(delta))/(2*4*a);
        printf("\nX1= %.2f\n", x1);
        printf("X1= %.2f\n", x2);
    }

    printf("\n");
    return 0;
}
