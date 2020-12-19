#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dolarChar = '$';

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j <= i; j++) {
            printf("%c ", dolarChar);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
