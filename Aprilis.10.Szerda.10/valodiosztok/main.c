#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int valosa=0;
    int valosb=0;
    int i;
    while(!feof(stdin))
    {
        scanf("%d %d",&a,&b);
        for(i=2;i<a;i++)
        {
            if(a%i==0 && a!=i)
            {
                valosa++;
            }
        }
        for(i=2;i<b;i++)
        {
            if(b%i==0 && b!=i)
            {
                valosb++;
            }
        }
        if(valosa>valosb)
        {
            printf("%d\n",a);
        }
        else if(valosb>valosa)
        {
            printf("%d\n",b);
        }
        else
        {
            if(a<b)
            {
                printf("%d %d\n",a,b);
            }
            else
            {
                printf("%d %d\n",b,a);
            }
        }
        valosa=0;
        valosb=0;
    }
    return 0;
}
