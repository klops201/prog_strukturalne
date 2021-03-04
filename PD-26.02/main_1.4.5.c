#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,suma=0,i;
    printf("podaj liczbe calkowita nieujemna: ");
    scanf("%d",&n);

    if(n<=0)
        do
        {
            printf("podano nieprawidlowa liczbe, sprobuj jeszcze raz: ");
            scanf("%d",&n);
        }while(n<=0);

    printf("\n suma=0^2 ");

    for(i=1;i<=n;i++)
    {
        suma=suma+i*i;
        printf("+ %d^2 ",i);
    }
    printf(" = %d",suma);

    return 0;
}
