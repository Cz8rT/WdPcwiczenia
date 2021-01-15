#include <stdio.h>
#include <stdlib.h>

double power(double x, int y);

int main()
{
    double userNumber;
    int userPower;
    printf("Podaj liczb\251: ");
    scanf("%lf", &userNumber);
    printf("Podaj pot\251g\251 ca\210kowit\245: ");
    scanf("%d", &userPower);
    printf("%.3lf do pot\251gi %d wynosi %.3lf\n", userNumber, userPower, power(userNumber, userPower));
    return 0;
}

double power(double x, int y){
    double result = x;
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y<0){
        result = 1/x;
       for(int i = y + 1; i < 0; i++){
        result = result * (1/x);
        }
        return result;
    }
    for(int i = 1; i < y; i++){
        result = result * x;
    }
    return result;
}
