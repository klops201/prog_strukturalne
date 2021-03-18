#include <stdio.h>
#include <stdlib.h>

int potega(int);
int main()
{
    int n,k;
    printf("podaj dowolna liczbe calkowita: ");
    scanf("%d", &n);
    printf("2^%d = %d", n, potega(n));
    return 0;
}
int potega(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        k *= 2;
    }
    return k;
}
