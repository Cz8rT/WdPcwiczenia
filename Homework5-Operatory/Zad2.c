#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userNumber;

    printf("Podaj liczb\251 ca\210kowit\245.\n");
    scanf("%d", &userNumber);
    printf("\nLiczby:\n");

    for (int i = userNumber; i <= userNumber + 10; i++) {
        printf("%d\n", i);
    }

    getchar();
    return 0;
}
