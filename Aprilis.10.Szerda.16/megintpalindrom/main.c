#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sor[32];
    int i;
    int j;
    int hanykell=0;
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
        for(i=strlen(sor)-1,j=0;i>=0;i--,j++)
        {
            if(sor[i]!=sor[j])
            {
                hanykell++;
            }
        }
        printf("%d\n",hanykell/2);
        hanykell=0;
    }
    return 0;
}
