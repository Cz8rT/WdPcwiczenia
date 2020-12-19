#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numArray[8];
    int two = 2;
    int size = sizeof(numArray) / sizeof(numArray[0]);
    int counter = 0;

    for(int i = 0; i < size; i++){
        if(i == 0){
           numArray[i] = 1;
        } else {
            numArray[i] = two;
            two = two * 2;
        }
    }

    do{
        printf("Dwa do pot\251gi %d wynosi: %d\n", counter, numArray[counter]);
        counter++;
    }while(counter<size);

    getchar();
    return 0;
}

