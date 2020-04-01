#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int tmp;
    int nagyi;
    int apu=0;
    scanf("%d",&a);
    if(a==0)
    {
        nagyi=a;
        while(scanf("%d",&tmp))
        {
            if(tmp==1000)
            {
                break;
            }
            if(tmp<nagyi)
            {
                apu++;
            }
            if(tmp>nagyi)
            {
                nagyi=tmp;
            }
        }
    }
    if(apu)
    {
        printf("NO\n");
    }
    else{
    printf("YES\n");}
    return 0;
}
