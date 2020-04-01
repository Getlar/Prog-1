#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rendez(const void* a, const void* b)
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
    char sor[82];
    char* token;
    int n;
    int l=0;
    int* kimenet=(int*)malloc(sizeof(int)*l);
    int i;
    fgets(sor,82,stdin);
    while(!feof(stdin))
    {
        token=strtok(sor," ");
        while(token!=NULL)
        {
            n=atoi(token);
            for(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    break;
                }
            }
            if(n==i)
            {
                l++;
                kimenet=realloc(kimenet,l*sizeof(int));
                kimenet[l-1]=i;
            }
            token=strtok(NULL," ");
        }
        qsort(kimenet,l,sizeof(int),rendez);
        for(i=0;i<l;i++)
        {
            if(i!=l-1)
            {
                printf("%d ",kimenet[i]);
            }
            if(i==l-1)
            {
                printf("%d\n",kimenet[i]);
            }
        }
        if(l==0)
        {
            printf("\n");
        }
        l=0;
        kimenet=realloc(kimenet,l*sizeof(int));
        fgets(sor,82,stdin);
    }
    return 0;
}
