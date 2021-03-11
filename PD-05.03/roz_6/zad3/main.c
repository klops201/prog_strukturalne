#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rzad = 6;
    char znak = 'F';

    for(int i=0; i < rzad; i++)
        {
            for (int j = 0; j <= i; j++)
            {
            printf("%c",znak);
            znak--;
            }

        printf("\n");
        znak = 'F';
        }
    return 0;
}
