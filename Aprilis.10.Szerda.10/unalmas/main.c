#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char *t)
{
    int i;
    int j;
    int max=0;
    int tmp=0;
    char mas[strlen(t)];
    strcpy(mas,t);
    for(i=0;i<strlen(mas);i++)
    {
        for(j=i;j<strlen(mas);j++)
        {
            if(mas[j]=='*')
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
