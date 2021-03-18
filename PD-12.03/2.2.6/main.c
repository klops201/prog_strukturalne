#include <stdio.h>
#include <stdlib.h>

int potega(int,int);
int main()
{
    int n, m;
    printf("podaj 2 nieujemne liczby calkowite(conajmniej jedna musi byc rozna od 0): ");
    scanf("%d %d",&n, &m);
    if(n < 0 || m < 0)
    {
        while((n < 0 || m <0 ) || (m == 0 && n == 0))
        {
            printf("\n\n niepoprawne liczby, sprobuj jeszcze raz: ");
            scanf("%d %d",&n, &m);
        }
    }

    printf("%d^%d = %d", n, m, potega(n,m));
    return 0;
}

int potega(int n, int m)
{
    int k = 1;
    for (int i= 1; i <= m; i++)
    {
        k *= n;
    }
    return k;
}
