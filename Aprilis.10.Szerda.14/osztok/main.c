#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        printf("%d: ",a);
        for(i=1;i<a+1;i++)
        {
            if(a%i==0 && a!=i)
            {
                printf("%d ",i);
            }
            if(a==i)
            {
                printf("%d\n",i);
            }
        }
        scanf("%d",&a);
    }
    return 0;
}
