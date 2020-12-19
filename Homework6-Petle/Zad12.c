#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sentenceArray[255];

    gets(sentenceArray);
    int size = strlen(sentenceArray);

    for(int i = size - 1; i >= 0; i--){
        printf("%c", sentenceArray[i]);
    }

    getchar();
    return 0;
}

