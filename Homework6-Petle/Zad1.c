#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myArray[25];
    int counter = 0;

    for(char i = 'a'; i <= 'z'; i++) {

        myArray[counter] = i;
        counter++;

    }

    printf("Tablica:\n");

    for(int i = 0; i <= sizeof(myArray); i++) {

        printf("%c ", myArray[i]);

    }

    getchar();
    return 0;
}
