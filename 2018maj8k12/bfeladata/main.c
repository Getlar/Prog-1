#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char inputok[100];
    int hanyadik=0;
    char keresendo[20];
    int vane=0;
    char sor[31];
    char* token;
    FILE * fin=fopen(argv[1],"r");
    strcpy(keresendo,argv[2]);
    while(fgets(sor,1000,fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        hanyadik++;
        token=strtok(sor,":");
        token = strtok(NULL,",");
        while(token!=NULL)
        {
            strcpy(inputok,token);
            if(strcmp(inputok,keresendo)==0)
            {
                printf("%d\n",hanyadik);
                vane=1;
            }
            token = strtok(NULL,",");
        }
    }
    if(vane==0)
    {
        printf("Not found!\n");
    }
    fclose(fin);
    return 0;
}
