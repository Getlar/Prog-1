#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char sor[32];
    int i;
    int kicsi=0;
    int nagy=0;
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
            if(islower(sor[i]))
            {
                kicsi++;
            }
            if(isupper(sor[i]))
            {
                nagy++;
            }
        }
        printf("%d %d ",nagy,kicsi);
        if((kicsi+nagy)*2>strlen(sor))
        {
            printf("STRONG\n");
        }
        else
        {
            printf("WEAK\n");
        }
        kicsi=0;
        nagy=0;
    }
    return 0;
}
