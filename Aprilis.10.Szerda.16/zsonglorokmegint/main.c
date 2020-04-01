#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sor[62];
    char* token;
    int hanybohoc=1;
    int hanytargy=0;
    int n;
    int i;
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
        token=strtok(sor,":");
        token=strtok(NULL,",");
        n=atoi(token);
        hanytargy=hanytargy+n;
        for(i=0;i<hanybohoc;i++)
        {
            token=strtok(NULL,":");
            token=strtok(NULL,",");
            n=atoi(token);
            hanytargy=hanytargy+n;
        }
        printf("%d %d\n",hanybohoc,hanytargy);
        hanytargy=0;
        hanybohoc=1;
        fgets(sor,62,stdin);
    }
    return 0;
}
