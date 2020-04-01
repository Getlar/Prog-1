#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int sor[21];
    int max;
    int min;
    int i;
    while(!feof(stdin))
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&b);
            sor[i]=b;
        }
        max=sor[0];
        min=sor[0];
        for(i=0;i<a;i++)
        {
            if(sor[i]>max)
            {
                max=sor[i];
            }
            if(sor[i]<min)
            {
                min=sor[i];
            }
        }
        printf("%d %d\n",min,max);
    }
    return 0;
}
