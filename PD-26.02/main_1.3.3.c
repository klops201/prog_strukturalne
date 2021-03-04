#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("podaj pierwsza liczbe calkowita: \n");
    scanf("%d",&a);

    printf("podaj druga liczbe calkowita: \n");
    scanf("%d",&b);

    printf("podaj trzecia liczbe calkowita: \n");
    scanf("%d",&c);

    if (a>b && a>c)
        printf("najwieksza liczba to %d",a);
    if(b>a && b>c)
        printf("najwieksza liczba to %d",b);
    if(c>a && c>b)
        printf("najwieksza liczba to %d",c);
    if(a==b && b==c)
        printf("nie ma najwiekszej liczby! wszystkie sa rowne");
    return 0;
}
