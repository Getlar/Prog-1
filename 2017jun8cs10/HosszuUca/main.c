#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct varosok
{
    char varos[32];
    int legtobbhaz;
}VAROS;

int rendezes(const void* a, const void* b)
{
    VAROS* pa=(VAROS*) a;
    VAROS* pb=(VAROS*) b;

    return strcmp(pa->varos, pb->varos);
}

int main(int argc, char* argv[])
{
    int n=0, utcak, szam, maxszam=0, i, szamlalo=0;
    char* tokenvaros;
    char* tokenutca;
    char* tokenszam;
    char sor[302];
    FILE* fin=fopen(argv[1], "r");
    VAROS* kimenet=(VAROS*) malloc(n*sizeof(VAROS));

    while(fgets(sor, 302, fin)!=NULL)
    {
        utcak=0;
        for(i=0; i<strlen(sor); i++)
        {
            if(sor[i]==';')
            {
                utcak++;
            }
        }
        tokenvaros=strtok(sor, ";");
        for(i=0; i<utcak; i++)
        {
            tokenutca=strtok(NULL, ":");
            tokenszam=strtok(NULL, ";");
            szam=atoi(tokenszam);
            if(szam>maxszam && szamlalo==0)
            {
                maxszam=szam;
                n++;
                kimenet=realloc(kimenet, n*sizeof(VAROS));
                strcpy(kimenet[n-1].varos, tokenvaros);
                kimenet[n-1].legtobbhaz=szam;
            }
            else if(szam>maxszam)
            {
                maxszam=szam;
                strcpy(kimenet[n-1].varos, tokenvaros);
                kimenet[n-1].legtobbhaz=szam;
            }
            else if(szam==maxszam)
            {
                n++;
                kimenet=realloc(kimenet, n*sizeof(VAROS));
                strcpy(kimenet[n-1].varos, tokenvaros);
                kimenet[n-1].legtobbhaz=szam;
            }
        }
        szamlalo++;
    }
    qsort(kimenet, n, sizeof(VAROS), rendezes);
    for(i=0; i<n; i++)
    {
        puts(kimenet[i].varos);
    }
    free(kimenet);
    return 0;
}
