#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void foo(char *p, const char *f){
int i;
int k;
p[0]='\0';
for(i=0;i<strlen(f);i++)
{
    if(isupper(f[i])){
            for(k=0;f[i]!=' ' && f[i]!='\0';i++,k++)
            p[k] = f[i];
            p[k] = '\0';
            break;
            }
        }
    }
