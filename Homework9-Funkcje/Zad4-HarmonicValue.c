#include <stdio.h>
#include <stdlib.h>

double harmonicValue(double num1, double num2);

int main()
{
    double userNumber1;
    double usernumber2;

    printf("Podaj pierwsz\245 liczb\251: ");
    scanf("%lf", &userNumber1);
    printf("Podaj drug\245 liczb\251: ");
    scanf("%lf", &usernumber2);

    printf("Srednia harmoniczna wynosi: %.2lf", harmonicValue(userNumber1, usernumber2));
    return 0;
}

double harmonicValue(double num1, double num2) {
    double result;
    result = 1/((1/num1 + 1/num2)/2);
    return result;
}
