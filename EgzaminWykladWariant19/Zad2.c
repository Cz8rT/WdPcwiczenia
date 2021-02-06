#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, temp;

    printf("Prosz\251 poda\206 warto\230\206 M: ");
    scanf("%d", &M);
    printf("Prosz\251 poda\206 warto\230\206 N: ");
    scanf("%d", &N);

	printf("\nM = %d\n", M);
    printf("N = %d\n", N);

    temp = M;
    M = N;
    N = temp;

    printf("\nPo zamianie:\n", M);
    printf("\nM = %d\n", M);
    printf("N = %d\n", N);

    printf("\n");
    return 0;
}
