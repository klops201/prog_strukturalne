#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licz1 = 2, licz2 = 1;
    printf ("pierwsza liczba to %d a druga %d \n", licz1, licz2);
    zmiana(&licz1, &licz2);
    printf ("teraz pierwsza liczba to %d a druga %d \n", licz1, licz2);

    return 0;
}
void zmiana(int *wsk1, int *wsk2)
{
    if (*wsk2 < *wsk1)
    {
        int x = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = x;
    }
}
