#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sor[82];
    char * token;
    int vesszo=0;
    int ora;
    int perc;
    int minora;
    int minperc;
    int i;
    while(fgets(sor,82,stdin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        for(i=0;i<strlen(sor);i++)
        {
            if(sor[i]==',')
            {
                vesszo++;
            }
        }
        token=strtok(sor,":");
        token=strtok(NULL,":");
        minora=atoi(token);
        token=strtok(NULL,",");
        minperc=atoi(token);
        for(i=0;i<vesszo;i++)
        {
            token=strtok(NULL,":");
            token=strtok(NULL,":");
            ora=atoi(token);
            token=strtok(NULL,",");
            perc=atoi(token);
            if(minora > ora)
            {
                minora=ora;
                minperc=perc;
            }
            else if(minora==ora)
            {
                if(minperc > perc)
                {
                    minperc=perc;
                }
            }
        }
        if(minperc<10)
        {
        printf("%d:0%d\n",minora,minperc);
        }
        else
        {
            printf("%d:%d\n",minora,minperc);
        }
        vesszo=0;
    }
    return 0;
}
