#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,osszegx,osszegy,gk;
    x=0;
    y=0;
    osszegx=0;
    osszegy=0;
    gk=0;
    scanf("%d:%d",&x,&y);
        osszegx=osszegx+x;
        osszegy=osszegy+y;
        gk=x-y;
    while(scanf("%d:%d",&x,&y)>-1)
    {
        osszegx=osszegx+x;
        osszegy=osszegy+y;
        if(gk<x-y)
        gk=x-y;
    }
    printf("%d:%d\n",osszegx,osszegy);
    printf("%d\n",gk);
    return 0;
}
