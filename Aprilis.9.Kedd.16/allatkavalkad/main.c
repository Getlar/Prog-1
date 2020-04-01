#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct allatok
{
    char gyerek[22];
    int hany;
}ALLATOK;
int rendez(const void* a, const void*b)
{
    ALLATOK* pa=(ALLATOK*)a;
    ALLATOK* pb=(ALLATOK*)b;
    if(pa->hany > pb->hany)
    {
        return 1;
    }
    else if(pb->hany > pa->hany)
    {
        return -1;
    }
    else
    {
        return strcmp(pa->gyerek,pb->gyerek);
    }
}
int main()
{
    char sor[102];
    char * token;
    int hanyallat=1;
    int n=0;
    int i;
    ALLATOK* kimenet=(ALLATOK*)malloc(sizeof(ALLATOK)*n);
    while(fgets(sor,102,stdin)!=NULL)
    {
        n++;
        kimenet=realloc(kimenet,n*sizeof(ALLATOK));
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        for(i=0;i<strlen(sor);i++)
        {
            if(sor[i]==';')
            {
                hanyallat++;
            }
        }
        token=strtok(sor,":");
        strcpy(kimenet[n-1].gyerek,token);
        kimenet[n-1].hany=hanyallat;
        hanyallat=1;
    }
    qsort(kimenet,n,sizeof(ALLATOK),rendez);
    for(i=0;i<n;i++)
    {
        puts(kimenet[i].gyerek);
    }
    return 0;
}
