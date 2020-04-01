#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int lnko=0;
    int i,l;
    int gcd;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        for(i=1;i<=a;i++)
        {
            for(l=1; l<=i && l<= a; l++)
            {
                if(i%l==0 && a%l==0)
                {
                    gcd=l;
                }
            }
            if(gcd==1)
            {
                lnko++;
            }
        }
        printf("%d\n",lnko);
        lnko=0;
        scanf("%d",&a);
    }
    return 0;
}
