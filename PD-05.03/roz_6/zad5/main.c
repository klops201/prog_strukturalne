#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    printf("podaj dwie liczby calkowie(granica dolna i gorna tabeli): ");
    scanf("%d %d", &i, &j);

    printf(" x || x^2 || x^3 \n\n");
    for(int k = i; k <=j; k++)
    {
        printf(" %d || %d  || %d \n\n", k, k * k, k * k *k );
    }
    return 0;
}
