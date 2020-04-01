#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char foo(const char *s)
{
    int i;
    char min;
    min=s[0];
    for(i=1;i<strlen(s);i++)
    {
        if(!isupper(s[i]))
        {
            return 0;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            if(s[i]<=min)
            {
                min=s[i];
            }
        }
    }
    return min;
}
