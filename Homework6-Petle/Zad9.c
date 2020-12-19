#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numArray[8];
    int size = sizeof(numArray) / sizeof(numArray[0]);

    for(int i = 0; i < size; i++){
        printf("Podaj %d liczb\251: ", i + 1);
        scanf("%d", &numArray[i]);
    }

    printf("\nPodane liczby w odwrotnej kolejno\230ci: ");

    for(int i = size  - 1; i >= 0; i--){
        printf("%d ", numArray[i]);
    }

    getchar();
    return 0;
}

