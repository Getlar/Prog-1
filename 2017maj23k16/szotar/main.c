#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct szavak
{
    char szo[32];
}SZAVAK;

int main()
{
    int n=0, k=0, i=0, j, kapcs=0;
    SZAVAK* kimenethun=(SZAVAK*) malloc(n*sizeof(SZAVAK));
    SZAVAK* kimeneteng=(SZAVAK*) malloc(k*sizeof(SZAVAK));
    char line[65];
    char* tokenhun;
    char* tokeneng;
    for(i=0; i<5; i++)
    {
        kapcs=0;
        fgets(line, 65, stdin);
        if(line[strlen(line)-1]=='\n')
        {
            line[strlen(line)-1]='\0';
        }
        tokenhun=strtok(line, ":");
        tokeneng=strtok(NULL, "\0");
        if(n==0)
        {
            n++;
            realloc(kimenethun, n*sizeof(SZAVAK));
            strcpy(kimenethun[n-1].szo, tokenhun);
        }
        if(k==0)
        {
            k++;
            realloc(kimeneteng, k*sizeof(SZAVAK));
            strcpy(kimeneteng[k-1].szo, tokeneng);
        }
        for(j=0; j<n; j++)
        {
            if(strcmp(kimenethun[j].szo, tokenhun)==0)
            {
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
            realloc(kimenethun, n*sizeof(SZAVAK));
            strcpy(kimenethun[n-1].szo, tokenhun);
        }
        kapcs=0;
        for(j=0; j<k; j++)
        {
            if(strcmp(kimeneteng[j].szo, tokeneng)==0)
            {
                break;
            }
            else
            {
                kapcs=1;
            }
        }
        if(kapcs==1)
        {
            k++;
            realloc(kimeneteng, k*sizeof(SZAVAK));
            strcpy(kimeneteng[k-1].szo, tokeneng);
        }
    }
    printf("%d\n%d\n", n-1, k-1);
    return 0;
}
