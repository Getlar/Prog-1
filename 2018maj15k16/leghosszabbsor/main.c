#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo(FILE * fp){
    char str[1001];
    char * res = (char*)malloc(sizeof(char)*1001);
    int h = 0;
    res[0] = '\0';
    while(fgets(str,1001,fp)!=NULL)
    {
        str[strlen(str)-1] = '\0';
        if(strlen(str) > h)
        {
            strcpy(res,str);
            h =strlen(str);
        }
    }
    return res;
}
