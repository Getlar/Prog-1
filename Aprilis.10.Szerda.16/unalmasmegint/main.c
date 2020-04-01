#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int length;
    int count;
} ELEM;

ELEM foo(const char *t)
{
    ELEM kimenet;
    int i;
    int j;
    kimenet.length=0;
    kimenet.count=0;
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
        if(tmp>kimenet.length)
        {
            kimenet.length=tmp;
            kimenet.count=0;
        }
        if(tmp==kimenet.length && tmp!=0)
        {
            kimenet.count++;
        }
        i=j;
    }
    return kimenet;
}
