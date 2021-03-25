#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licz1 = 20, licz2 = 10, *w = &licz2;
    printf("wskaznik wskazuje %d \n", *w);
    przepisz(licz1, w);
    printf("teraz wskaznik wskazuje %d \n", *w);
    return 0;
}
void przepisz(int n, int *w)
{
    *w = n;
}
