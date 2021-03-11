#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rzad = 5;
    char znak = '$';

    for(int i=0; i < rzad; i++)
        {
            for (int j = 0; j <= i; j++)
            {
            printf("%c",znak);
            }

        printf("\n");
        }
    return 0;
}
