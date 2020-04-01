#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void foo(const char *s, char *t)
{
    int i,j;
    strcpy(t,s);
    for(i=strlen(t)-1;i>=0;i--){
        if(t[i]=='*'){
            for(j=i;t[j]!='=';j++);
            t[j]='*';
            t[i]='=';
            }
    }
}
