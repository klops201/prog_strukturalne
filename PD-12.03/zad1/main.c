#include <stdio.h>
#include <stdlib.h>

double min(double,double);
int main()
{
    double wynik;
    wynik = min(11.33,88.90);
    printf("mniejsza z liczb: %.2f", wynik);
    return 0;
}
double min(double x, double y)
{
    if( x < y)
        return x;
    else
        return y;

}
