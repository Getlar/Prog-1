#include <stdio.h>
#include <stdlib.h>
int foo(int t)
{
    int mennyi=0;
    if(t<0)
    {
        return 0;
    }
    while (t!=0)
    {
        if(t%2==1)
        {
            mennyi++;
        }
        t=t/2;
    }
    return mennyi;
}

