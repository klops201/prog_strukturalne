#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pobrane[100];
    int x, p = 0, np = 0, sumaP = 0, sumaNP = 0;

    while(x != 0)
    {
        printf("podaj dowolna liczbe calkowita: ");
        scanf("%d", &x);
            for(int i = 0; i <= 100; i++)
            {
                pobrane[i] = x;
            }
        if(x % 2 == 0){ sumaP += x; p++; }
        else {sumaNP += x; np++;}
    }
    p--;
    double sredniaP, sredniaNP;
    sredniaP = (double)sumaP/p;
    sredniaNP = (double)sumaNP/np;
    printf("\n\nliczby parzyste: %d oraz ich srednia wartosc: %.2f \n\n", p ,sredniaP);
    printf("liczby nieparzyste: %d oraz ich srednia wartosc: %.2f\n\n", np ,sredniaNP);

    return 0;
}
