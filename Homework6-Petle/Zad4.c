#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userLetter;

    printf("Podaj wielk\245 liter\251: ");
    scanf("%c", &userLetter);

    for(char i = 'A'; i <= userLetter; i++) {

        for(char j = i; j <= userLetter; j++) {
            printf(" ");
        }
        for(char k = 'A'; k <= i; k++) {
            printf("%c", k);
        }
        for(char m = i - 1; m >= 'A'; m--) {
            printf("%c", m);
        }

        printf("\n");
    }

    getchar();
    return 0;
}
