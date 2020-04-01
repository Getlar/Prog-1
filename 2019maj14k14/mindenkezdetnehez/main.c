#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct betuk
{
    char betu;
    int hany;
}BETUK;
int rendez(const void*a, const void*b)
{
    BETUK* pa=(BETUK*)a;
    BETUK* pb=(BETUK*)b;
    if(pa->betu > pb->betu)
    {
        return 1;
    }
    else if(pa->betu < pb->betu)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char*argv[])
{
    FILE* fin=fopen(argv[1],"r");
    char sor[22];
    int n=0;
    int i;
    int kapcs=0;
    BETUK* kimenet=(BETUK*)malloc(n*sizeof(BETUK));
    while(fgets(sor,22,fin)!=NULL)
    {
        sor[strlen(sor)-1]='\0';
        sor[0]=toupper(sor[0]);
        if(n==0)
        {
            n++;
            kimenet=realloc(kimenet,n*sizeof(BETUK));
            kimenet[n-1].betu=sor[0];
            kimenet[n-1].hany=1;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(kimenet[i].betu==sor[0])
                {
                    kapcs=0;
                    kimenet[i].hany++;
                    break;
                }
                else
                {
                    kapcs=1;
                }
            }
            if(kapcs==1)
            {
                n++;
                kimenet=realloc(kimenet,n*sizeof(BETUK));
                kimenet[n-1].betu=sor[0];
                kimenet[n-1].hany=1;
            }
        }
        kapcs=0;
    }
    qsort(kimenet,n,sizeof(BETUK),rendez);
    for(i=0;i<n;i++)
    {
        printf("%c: %d\n",kimenet[i].betu,kimenet[i].hany);
    }
    free(kimenet);
    return 0;
}
