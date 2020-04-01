#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct boltok{
char boltok[34];
}BOLTOK;
int main(int argc, char * argv[])
{
    FILE * fin=fopen(argv[1],"r");
    char sor[1002];
    int hanyszor=0;
    BOLTOK* boltok=(BOLTOK*) malloc(hanyszor*sizeof(BOLTOK));
    char * tokenaruhaz;
    char * tokencikk;
    int i;
    while(fgets(sor,1002,fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        tokenaruhaz=strtok(sor,";");
        tokencikk=strtok(NULL,";");
        while(tokencikk!=NULL)
        {
            if(strcmp(tokencikk,"tej")==0)
            {
                hanyszor++;
                boltok=realloc(boltok,hanyszor*sizeof(BOLTOK));
                strcpy(boltok[hanyszor-1].boltok,tokenaruhaz);
                break;
            }
            tokencikk=strtok(NULL,";");
        }
    }
    printf("%d\n",hanyszor);
    for(i=0;i<hanyszor;i++)
    {
        puts(boltok[i].boltok);
    }
    return 0;
}
