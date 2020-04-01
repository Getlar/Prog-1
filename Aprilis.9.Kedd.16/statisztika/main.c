#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char sor[32];
    int i;
    int nagybetu=0;
    int kisbetu=0;
    while(1)
    {
        fgets(sor,32,stdin);
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        if(strcmp(sor,"THE END")==0)
        {
            break;
        }
        for(i=0;i<strlen(sor);i++)
        {
            if(isupper(sor[i]))
            {
                nagybetu++;
            }
            if(islower(sor[i]))
            {
                kisbetu++;
            }
        }
        if(nagybetu>kisbetu)
        {
            printf("%d %d ",nagybetu,kisbetu);
            printf("UPPERCASE\n");
        }
        if(nagybetu<kisbetu)
        {
            printf("%d %d ",nagybetu,kisbetu);
            printf("LOWERCASE\n");
        }
        if(nagybetu==kisbetu)
        {
            printf("%d %d ",nagybetu,kisbetu);
            printf("EQUALS\n");
        }
        nagybetu=0;
        kisbetu=0;
    }
    return 0;
}
