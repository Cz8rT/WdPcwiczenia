#include <stdio.h>

float biggestNum(float sourceArray[]);

int main()
{
   float array[10] = {8.2, 32, -4.56, 5.666, 6.32, 93, 345, -74.32, 424.23, -425.53, 89, 56};

    printf("Najwieksza liczba to: %.2f", biggestNum(array));

    return 0;
}

float biggestNum(float sourceArray[]){
    int size = 12;
    float biggest;
    for(int i = 0; i < size; i++){
        if(biggest < sourceArray[i]){
            biggest = sourceArray[i];
        }
    }
    return biggest;
};
