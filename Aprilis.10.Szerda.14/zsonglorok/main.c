#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int hanybohoc=1;
    int maxbohoc=0;
    int hanymax=0;
    int i;
    char sor[62];
    fgets(sor,62,stdin);
    while(!feof(stdin))
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        for(i=0;i<strlen(sor);i++)
        {
            if(sor[i]==',')
            {
                hanybohoc++;
            }
        }
        if(hanybohoc>maxbohoc)
        {
            maxbohoc=hanybohoc;
            hanymax=0;
        }
        if(hanybohoc==maxbohoc)
        {
            hanymax++;
        }
        hanybohoc=1;
        fgets(sor,62,stdin);
    }
    printf("%d\n",hanymax);
    return 0;
}
