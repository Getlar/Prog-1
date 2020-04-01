#include <stdio.h>
#include <stdlib.h>
int foo(const void *s, const void *t)
{
    int sa = *(int*)s;
    int ta = *(int*)t;
    int osztoa=0;
    int osztob=0;
    int i;
    for(i=2;i<sa/2+1;i++)
    {
        if(sa%i==0)
        {
            osztoa++;
        }
    }
    for(i=2;i<ta/2+1;i++)
    {
        if(ta%i==0)
        {
            osztob++;
        }
    }
    if(osztoa > osztob)
    {
        return 1;
    }
    else if(osztob > osztoa)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
