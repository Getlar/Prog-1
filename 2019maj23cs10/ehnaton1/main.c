#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *foo(const char *sztring, const char *ehnaton)
{
    int k=0;
    int i;
    int j;
    int szam;
    char aktualis[strlen(sztring)+1];
    strcpy(aktualis,sztring);
    char* full=aktualis;
    char* haystack=aktualis;
    char* kimenet=(char*)malloc(strlen(aktualis)*sizeof(char)+1);
    if(strlen(aktualis)!=0){
    haystack=strstr(aktualis,ehnaton);
    szam=haystack-full;
    for(i=0;i<strlen(aktualis);i++)
    {
        if(i==szam)
        {
            for(j=k;j<k+3;j++)
            {
                kimenet[j]='*';
                aktualis[j]=' ';
            }
            i=i+7;
            haystack=strstr(aktualis,ehnaton);
            szam=haystack-full;
            k=j;
        }
        kimenet[k]=aktualis[i];
        k++;
    }
    }
    return kimenet;
}
