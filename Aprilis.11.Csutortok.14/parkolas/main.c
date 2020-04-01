#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char *t, int a)
{
    char tmp[strlen(t)-1];
    strcpy(tmp,t);
    int hanyhely=-1;
    int osszhely=0;
    int i;
    int j;
    for(i=0;i<strlen(tmp);i++)
    {
        if(tmp[i]=='=')
        {
            for(j=i;j<strlen(tmp);j++)
            {
                hanyhely++;
                if(tmp[j]=='*')
                {
                    break;
                }
            }
            i=j;
        }
        if(hanyhely>=a)
        {
            osszhely++;
        }
        hanyhely=0;
    }
    return osszhely;
}
