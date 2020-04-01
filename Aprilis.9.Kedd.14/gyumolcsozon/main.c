#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nevek
{
    char nev[22];
    int hany;
}NEVEK;

int rendez(const void*a,const void*b)
{
    NEVEK* pa=(NEVEK*)a;
    NEVEK* pb=(NEVEK*)b;

    if(pa->hany > pb->hany)
    {
        return -1;
    }
    else if(pa->hany < pb->hany)
    {
        return 1;
    }
    else
    {
        return strcmp(pa->nev,pb->nev);
    }
}
int main()
{
    int n=0;
    int i;
    int gyumi=1;
    NEVEK* kimenet=(NEVEK*)malloc(sizeof(NEVEK)*n);
    char* token;
    char sor[102];
    while(fgets(sor,102,stdin)!=NULL)
    {
        n++;
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        kimenet=realloc(kimenet,n*sizeof(NEVEK));
        for(i=0;i<strlen(sor);i++)
        {
            if(sor[i]==',')
            {
                gyumi++;
            }
        }
        token=strtok(sor,":");
        strcpy(kimenet[n-1].nev,token);
        kimenet[n-1].hany=gyumi;
        gyumi=1;
    }
    qsort(kimenet,n,sizeof(NEVEK),rendez);
    for(i=0;i<n;i++)
    {
        puts(kimenet[i].nev);
    }
    free(kimenet);
    return 0;
}
