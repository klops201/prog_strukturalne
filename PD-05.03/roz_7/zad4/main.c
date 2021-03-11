#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int zmiany = 0, x = 50;
    char tekst[x];

    while(tekst[x] != '#')
    {
        scanf("%c", &tekst[x]);
        if(tekst[x] == '.'){zmiany++; tekst[x] = '!';}
        else if (tekst[x] == '!'){zmiany++; tekst[x] = '!!';}

    }

    printf("\n\n ilosc zmian: %d \n\n", zmiany);
    //printf("tekst po zmianie: [%s]", tekst);
    for(int i = 0; i <= x; i++)
        printf("%c",tekst[i] );




    return 0;
}
