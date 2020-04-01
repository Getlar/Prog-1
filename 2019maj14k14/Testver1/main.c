#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nevek
{
    char nev[22];
}NEVEK;
int main(int argc, char* argv[])
{
    FILE* fin=fopen(argv[1],"r");
    int n=0;
    char sor[102];
    char* token;
    int kapcs=0;
    int i;
    NEVEK* kimenet=(NEVEK*)malloc(sizeof(NEVEK)*n);
    while(fgets(sor,102,fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        token=strtok(sor,";");
        if(n==0)
        {
            n++;
            kimenet=realloc(kimenet,n*sizeof(NEVEK));
            strcpy(kimenet[n-1].nev,token);
        }
        else if(n!=0)
        {
            for(i=0;i<n;i++)
            {
                if(strcmp(kimenet[i].nev,token)==0)
                {
                    kapcs=0;
                    break;
                }
                else
                {
                    kapcs=1;
                }
            }
            if(kapcs==1)
            {
                n++;
                kimenet=realloc(kimenet,n*sizeof(NEVEK));
                strcpy(kimenet[n-1].nev,token);
            }
        }
        kapcs=0;
    }
    printf("%d\n",n);
    free(kimenet);
    return 0;
}
