#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int foo(char *s , int a)
{
    int i;
    int j;
    int betu=0;
    int hany=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='!')
        {
            s[i]='.';
            for(j=i;s[j]!='!';j++);
            for(i=i+1;i<j+1;i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    betu++;
                }
            }
            if(a<betu)
            {
                hany++;
            }
            betu=0;
            i=j-1;

        }
    }
    return hany-1;
}
