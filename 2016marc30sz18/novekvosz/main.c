#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,tmp,j,o,f,index;
    int min=0;
    int max=0;
    int t[50]={0};
    int s[50]={0};
    int sz=0;
    int k=0;
    int p=0;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        p++;
        if(a<1)
        {
            return 0;
        }
        if(a!=0)
        {
            scanf("%d",&tmp);
            min=tmp;
            max=tmp;
        }
        for(i=0;i<a-1;i++)
        {
            scanf("%d",&tmp);
            if(tmp<min)
            {
                min=tmp;
            }
            if(tmp>max)
            {
                max=tmp;
            }
        }
        sz=min+max;
        t[k]=sz;
        k++;
        scanf("%d",&a);
    }
    index=0;
    for(j=0;j<p;j++)
    {
        o=0;
        max=t[o];
        for(i=1;i<p;i++)
        {
            if(t[i]>=max)
            {
                max=t[i];
                o=i;
            }
        }
        t[o]=-100000;
        s[index]=o;
        index++;
    }
    for(f=p-1;f>-1;f--)
    {
        if(f==0)
        {
            printf("%d\n",s[f]+1);
            goto end;
        }
        printf("%d ",s[f]+1);
    }
    end:;
    return 0;
}
