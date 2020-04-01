#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char elso[41];
    char b[41];
    int i=0;
    if (fgets(elso,40,stdin)!=NULL);
    i=i+1;
    while(!feof(stdin))
    {
        if (fgets(b,40,stdin)!=NULL);
        i=i+1;
        if(strcmp(elso,b)==0)
        break;
    }
    printf("%d\n",i);
    return 0;
}

