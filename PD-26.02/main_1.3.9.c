#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba1,liczba2,wynik;
    char znak;
    printf("podaj dwie liczby :  ");
    scanf("%f",&liczba1);scanf("%f",&liczba2);

    printf("\n podaj znak operacji (+ , - , * , / ): ");
    scanf(" %c",&znak);

    switch(znak)
    {
        case '+' : wynik=liczba1+liczba2; break;
        case '-' : wynik=liczba1-liczba2; break;
        case '*' : wynik=liczba1*liczba2; break;
        case '/' : wynik=liczba1/liczba2; break;
        default : wynik=0;printf("\n podano zly znak dzialania! \n\n"); break;
    };
    printf("\n %f %c %f = %f",liczba1,znak,liczba2,wynik);
    return 0;
}
