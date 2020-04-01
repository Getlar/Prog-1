#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int n=0;
    int i;
    int j;
    int* primek=(int*)malloc(n*sizeof(int));
    scanf("%d %d",&a,&b);
    while(!feof(stdin))
    {
        if(a>b)
        {
            for(i=b;i<a+1;i++)
            {
                for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                }
                if(i==j)
                {
                    n++;
                    primek=realloc(primek,n*sizeof(int));
                    primek[n-1]=i;
                }
            }
        }
        else if(a<b)
        {
            for(i=a;i<b+1;i++)
            {
                for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                }
                if(i==j)
                {
                    n++;
                    primek=realloc(primek,n*sizeof(int));
                    primek[n-1]=i;
                }
            }
        }
        if(n==0)
        {
            printf("%d:\n",n);
        }
        else{
        printf("%d: ",n);
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                printf("%d ",primek[i]);
            }
            if(i==n-1)
            {
                printf("%d\n",primek[i]);
            }
        }
        }
        n=0;
        primek=realloc(primek,n*sizeof(int));
        scanf("%d %d",&a,&b);
    }
    return 0;
}
