#include <stdio.h>
#include <stdlib.h>

void mrJan(void);
void getUp(void);

int main()
{
    mrJan();
    mrJan();
    getUp();
    getchar();
    return 0;
}

void mrJan(void){
    printf("Panie Janie!\n");
}

void getUp(void){
    printf("Rano wsta\344!\n");
}
