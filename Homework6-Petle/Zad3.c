#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(char i = 'F'; i >= 'A'; i--) {

        for(char j = 'F'; j >= i; j--) {
            printf("%c ", j);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
