#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char *t)
{
    char akt[strlen(t)];
    strcpy(akt,t);
    int i;
    int j;
    int max=0;
    int tmp=0;
    for(i=0;i<strlen(akt);i++)
    {
        for(j=i;j<strlen(akt);j++)
        {
            if(akt[j]=='=')
            {
                break;
            }
        }
        tmp=j-i;
        if(tmp>max)
        {
            max=tmp;
        }
        i=j;
    }
    return max;
}
