#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sor[32];
    int i;
    int j;
    int kapcsolo=1;
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
        for(i=strlen(sor)-1,j=0;i>-1;i--,j++)
        {
            if(sor[j]==sor[i])
            {
                kapcsolo=0;
            }
            else
            {
                kapcsolo=1;
                break;
            }
        }
        if(kapcsolo)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
