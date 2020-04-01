#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct kutak
{
    char varos[32];
    int kutszam;
}KUTAK;

int rendezes(const void* a, const void* b)
{
    KUTAK* pa=(KUTAK*) a;
    KUTAK* pb=(KUTAK*) b;

    return strcmp(pa->varos, pb->varos);
}

int main(int argc, char* argv[])
{
    int n=0, kulkutak, osszsor=0, tmp, i;
    KUTAK* kimenet=(KUTAK*) malloc(n*sizeof(KUTAK));
    FILE* fin=fopen(argv[1], "r");
    char sor[302];
    char* tokenvaros;
    char* tokenkut;

    while(fgets(sor, 302, fin)!=NULL)
    {
        kulkutak=0;
        for(i=0; i<strlen(sor); i++)
        {
            if(sor[i]==';')
            {
                kulkutak++;
            }
        }
        if(osszsor==0)
        {
            n++;
            kimenet=realloc(kimenet, n*sizeof(KUTAK));
            tokenvaros=strtok(sor, ";");
            strcpy(kimenet[n-1].varos, tokenvaros);
            kimenet[n-1].kutszam=0;
            for(i=0; i<kulkutak; i++)
            {
                tokenvaros=strtok(NULL, ":");
                tokenvaros=strtok(NULL, ";");
                kimenet[n-1].kutszam+=atoi(tokenvaros);
            }
        }
        else
        {
            tmp=0;
            tokenvaros=strtok(sor, ";");
            for(i=0; i<kulkutak; i++)
            {
                tokenkut=strtok(NULL, ":");
                tokenkut=strtok(NULL, ";");
                tmp+=atoi(tokenkut);
            }
            if(tmp<kimenet[n-1].kutszam)
            {
                strcpy(kimenet[n-1].varos, tokenvaros);
                kimenet[n-1].kutszam=tmp;
            }
            else if(tmp==kimenet[n-1].kutszam)
            {
                n++;
                kimenet=realloc(kimenet, n*sizeof(KUTAK));
                strcpy(kimenet[n-1].varos, tokenvaros);
                kimenet[n-1].kutszam=tmp;
            }
        }
        osszsor++;
    }
    qsort(kimenet, n, sizeof(KUTAK), rendezes);
    for(i=0; i<n; i++)
    {
        puts(kimenet[i].varos);
    }
    return 0;
}
