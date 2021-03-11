#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[26];
    int i = 0;
    char j = 'x';

    for(i; i < 26; i++)
        tab[i] = j;

    for(int i = 0; i < 26; i++)
        printf("%c",tab[i]);

    return 0;
}
