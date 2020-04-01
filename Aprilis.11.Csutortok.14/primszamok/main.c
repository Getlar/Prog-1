#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    int j;
    scanf("%d %d",&a,&b);
    while(!feof(stdin))
    {
        if(a<=b)
        {
            printf("%d %d:",a,b);
            for(i=a;i<b+1;i++)
            {
                for(j=2;j<=i;j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                }
                if(i==j)
                {
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
        else if(b<a)
        {
            printf("%d %d:",b,a);
            for(i=b;i<a+1;i++)
            {
                for(j=2;j<=i;j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                }
                if(i==j)
                {
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
        scanf("%d %d",&a,&b);
    }
    return 0;
}
