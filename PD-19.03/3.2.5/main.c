#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int licz1 = 21, licz2 = 37;
    printf("%d + %d = %d",licz1, licz2, dodawanie(&licz1, &licz2));
    return 0;
}
int dodawanie(int *wsk1, int *wsk2)
{
    int i = *wsk1 + *wsk2;
    return i;
}
