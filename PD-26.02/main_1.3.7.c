#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("rownanie kwadratowe ma postac : ax^2 + bx + c , podaj wartosci wspolczynnikow a,b,c :\n");
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);

    printf(" podane wartosci: a - %d , b - %d , c - %d \n\n ", a,b,c);

    float delta,x1,x2;
    delta=b*b-4*a*c;
        if (delta<0)
            printf("uklad nie posiada rozwiazan");

        if(delta>0)
        {
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        printf("rozwiazanie rownania to x1=%f , x2=%f",x1,x2);
        };

        if(delta==0)
        {
        x1=-b/2*a;
        printf("rozwiazanie rownania to x1=%f",x1);
        };


    return 0;
}
