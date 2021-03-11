#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int biale= 0, x;
    char tekst[x];

    while(tekst[x] != '#')
    {
        scanf("%c", &tekst[x]);
        if( isspace(tekst[x])) biale++;

    }
    printf("ilosc znakow bialych: %d", biale);




    return 0;
}
