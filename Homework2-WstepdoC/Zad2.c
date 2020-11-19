#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[] = "Adam";
    char lastName[] = "We\210nicki";
    char address[] = "10-381 Olsztyn";
    printf("Name: %s %s\n", firstName, lastName);
    printf("Address: %s\n", address);
    getchar();
    return 0;
}
