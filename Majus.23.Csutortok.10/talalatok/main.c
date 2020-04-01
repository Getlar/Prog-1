#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rendez(const void*a,const void*b)
{
    int pa=*(int*)a;
    int pb=*(int*)b;
    if(pa>pb)
    {
        return 1;
    }
    else if(pb>pa)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char keresett[12];
    char nezett[32];
    int i;
    int j;
    int l;
    int k;
    int hanyszor=0;
    int kapcs=1;
    int *hely=(int*)malloc(sizeof(int)*hanyszor);
    fgets(keresett,12,stdin);
    if(keresett[strlen(keresett)-1]=='\n')
    {
        keresett[strlen(keresett)-1]='\0';
    }
    while(1)
    {
        fgets(nezett,32,stdin);
        if(nezett[strlen(nezett)-1]=='\n')
        {
            nezett[strlen(nezett)-1]='\0';
        }
        if(strcmp(nezett,"THE END")==0)
        {
            break;
        }
        for(i=0;i<strlen(nezett);i++)
        {
            if(nezett[i]==keresett[0])
            {
                l=i;
                k=i;
                for(j=0;j<strlen(keresett);j++)
                {
                    if(nezett[l]!=keresett[j] && j!=strlen(keresett))
                    {
                        kapcs=0;
                        break;
                    }
                    l++;
                }
                if(kapcs!=0)
                {
                    if(j==strlen(keresett))
                    {
                        hanyszor++;
                        hely=realloc(hely,hanyszor*sizeof(int));
                        hely[hanyszor-1]=k;
                    }
                }
            }
            kapcs=1;
        }
        if(hanyszor==0)
        {
            printf("%d\n",-1);
        }
        qsort(hely,hanyszor,sizeof(int),rendez);
        for(i=0;i<hanyszor;i++)
        {
            if(i!=hanyszor-1)
            {
                printf("%d ",hely[i]);
            }
            if(i==hanyszor-1)
            {
                printf("%d\n",hely[i]);
            }
        }
        hanyszor=0;
        hely=realloc(hely,hanyszor*sizeof(int));
        kapcs=1;
    }
    free(hely);
    return 0;
}
