#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct diak
{
    char nev[40];
    int evfolyam;
    char szak[17];
}DIAK;

//643936

int main(int argc, char* argv[])
{
    int n=0, m=0, i, j;
    DIAK* kimenet1=(DIAK*) malloc(n*sizeof(DIAK));
    DIAK* kimenet2=(DIAK*) malloc(m*sizeof(DIAK));
    FILE* fin1=fopen(argv[1], "r");
    FILE* fin2=fopen(argv[2], "r");
    char line[70];
    char* token;

    if(fin1!=NULL){
    while(fgets(line, 70, fin1)!=NULL)
    {
        if(line[strlen(line)-1]=='\n')
        {
            line[strlen(line)-1]='\0';
        }
        token=strtok(line, ";");
        n++;
        kimenet1=realloc(kimenet1, n*sizeof(DIAK));
        strcpy(kimenet1[n-1].nev, token);
        token=strtok(NULL, ";");
        kimenet1[n-1].evfolyam=atoi(token);
        token=strtok(NULL, "\0");
        strcpy(kimenet1[n-1].szak, token);
    }
    fclose(fin1);
    }
    if(fin2!=NULL){
    while(fgets(line, 70, fin2)!=NULL)
    {
        if(line[strlen(line)-1]=='\n')
        {
            line[strlen(line)-1]='\0';
        }
        token=strtok(line, ";");
        m++;
        kimenet2=realloc(kimenet2, m*sizeof(DIAK));
        strcpy(kimenet2[m-1].nev, token);
        token=strtok(NULL, ";");
        kimenet2[m-1].evfolyam=atoi(token);
        token=strtok(NULL, "\0");
        strcpy(kimenet2[m-1].szak, token);
    }
    fclose(fin2);
    }
    int kapcs=0;
    printf("%d %d\n", n, m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(strcmp(kimenet1[i].nev, kimenet2[j].nev)!=0)
            {
                kapcs=1;
            }
            else
            {
                kapcs=0;
                break;
            }
        }
        if(kapcs==1)
        {
            printf("%s;%d;%s\n", kimenet1[i].nev, kimenet1[i].evfolyam, kimenet1[i].szak);
        }
    }
    free(kimenet1);
    free(kimenet2);
    return 0;
}
