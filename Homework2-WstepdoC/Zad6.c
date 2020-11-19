#include <stdio.h>
#include <stdlib.h>

void smile(void);

int main()
{
    int liczbaWywolan = 6;
    for (int i = 0; i < liczbaWywolan;i++){
        smile();
        printf(" ");
        if (i == 2 || i > 3){
            printf("\n");
        }
    }
    getchar();
    return 0;
}

void smile(void){
printf("U\230miech!");
}
