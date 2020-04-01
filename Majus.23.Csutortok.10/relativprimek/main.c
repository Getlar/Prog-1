#include <stdio.h>
#include <stdlib.h>
int rendez(const void*a,const void *b)
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
    int a;
    int b;
    int i;
    int tmp;
    int lnko;
    int n=0;
    int j;
    int* szamok=(int*)malloc(n*sizeof(int));
    scanf("%d %d",&a,&b);
    while(!feof(stdin))
    {
        for(i=0;i<a;i++)
        {
            scanf("%d",&tmp);
            for(j=1;j<tmp+1 && j<b;j++)
            {
                if(tmp%j==0 && b%j==0)
                {
                    lnko=j;
                }
            }
            if(lnko==1)
            {
                n++;
                szamok=realloc(szamok,n*sizeof(int));
                szamok[n-1]=tmp;
            }
        }
        qsort(szamok,n,sizeof(int),rendez);
        printf("%d\n",n);
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                printf("%d ",szamok[i]);
            }
            if(i==n-1)
            {
                printf("%d\n",szamok[i]);
            }
        }
        if(n==0)
        {
            printf("\n");
        }
        n=0;
        szamok=realloc(szamok,n*sizeof(int));
        scanf("%d %d",&a,&b);
    }
    return 0;
}
