#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sor[52];
    int i;
    int maxbohoc=0;
    int aktualis=0;
    while(!feof(stdin))
    {
        fgets(sor,52,stdin);
        for(i=0;i<strlen(sor);i++)
        {
            if(sor[i]==',')
            {
                aktualis++;
            }
        }
        if(aktualis>maxbohoc)
        {
            maxbohoc=aktualis;
        }
        aktualis=0;
    }
    printf("%d\n",maxbohoc+1);
    return 0;
}
