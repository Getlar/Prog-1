#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct emberek
{
    char nev[52];
    int elt;
}EMBEREK;
int main()
{
    char sor[62];
    int n;
    int m;
    int l=0;
    int i;
    EMBEREK* kimenet=(EMBEREK*)malloc(l*sizeof(EMBEREK));
    char* token;
    char* token1;
    while(fgets(sor,62,stdin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        token1=strtok(sor,":");
        token=strtok(NULL,"-");
        n=atoi(token);
        token=strtok(NULL,"\n\0");
        m=atoi(token);
        if(n%100>m%100 && n<m)
        {
            l++;
            kimenet=realloc(kimenet,l*sizeof(EMBEREK));
            strcpy(kimenet[l-1].nev,token1);
            kimenet[l-1].elt=m-n;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%s (%d)\n",kimenet[i].nev,kimenet[i].elt);
    }
    free(kimenet);
    return 0;
}
