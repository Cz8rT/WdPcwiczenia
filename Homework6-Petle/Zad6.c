#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char userWord[255];

    printf("Wpisz s\210owo: ");
    scanf("%s", &userWord);

    printf("S\210owo wspak: ");

    for(int i = strlen(userWord) - 1; i >= 0; i--) {
        printf("%c", userWord[i]);
    }

    getchar();
    return 0;
}
