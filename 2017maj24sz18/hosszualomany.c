#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct kimenet
{
    char nev[100];
    int hossz;
}kimenet;

int rendezes(const void* a, const void* b)
{
    kimenet* pa=(kimenet*)a;
    kimenet* pb=(kimenet*)b;

    if(pa->hossz > pb->hossz)
    {
        return -1;
    }
    else if(pa->hossz < pb->hossz)
    {
        return 1;
    }
    else
    {
        return(strcmp(pa->nev, pb->nev));
    }
}

int main(int argc, char* argv[])
{
    int charszam=0, i, ch;
    FILE* fin;
    kimenet ki[100];

    for(i=1; i<argc; i++)
    {
        fin=fopen(argv[i], "r");
        while((ch=fgetc(fin))!=EOF)
        {
            charszam++;
        }
        ki[i-1].hossz=charszam;
        strcpy(ki[i-1].nev, argv[i]);
        charszam=0;
        fclose(fin);
    }
    qsort(ki, argc-1, sizeof(*ki), rendezes);
    for(i=1; i<argc; i++)
    {
        printf("%s: %d\n", ki[i-1].nev, ki[i-1].hossz);
    }
    return 0;
}
