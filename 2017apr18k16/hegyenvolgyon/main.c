#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp;
    int min;
    int max;
    int magassag=0;
    int o;
    scanf("%d",&tmp);
    min=tmp;
    max=tmp;
    while(!feof(stdin))
    {
        scanf("%d",&tmp);
        magassag=magassag+200;
        if(tmp>max)
        {
            max=tmp;
        }
        if(tmp<min)
        {
            min=tmp;
        }
    }
    o=max-min;
    printf("%d %d\n",o,magassag-200);
    return 0;
}
