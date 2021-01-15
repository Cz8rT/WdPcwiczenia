#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

int main()
{
    double num1;
    double num2;

    printf("Podaj pierwsz\245 liczb\251: ");
    scanf("%lf", &num1);
    printf("Podaj drug\245 liczb\251: ");
    scanf("%lf", &num2);
    printf("%.2lf jest mniejsza.\n", min(num1, num2));
    return 0;
}

double min(double x, double y) {
    double lowerNum;
    if (x < y) lowerNum = x;
    else lowerNum = y;
    return lowerNum;
}
