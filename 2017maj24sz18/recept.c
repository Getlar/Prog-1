#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct kolunbozohozzavalok
{
    char hozzavalo[25];
}kulonbozohozzavalok;

int main(int argc, char* argv[])
{
    kulonbozohozzavalok kul[1000];
    char sor[301];
    int hossz, i, hozzavalok=0, sorszam=0;
    char* token;
    FILE* fin=fopen(argv[1], "r");

    while(fgets(sor, 301, fin)!=NULL)
    {
        hossz=strlen(sor);
        if(sorszam==0)
        {
            token=strtok(sor, ":");
            token=strtok(NULL, ",");
            strcpy(kul[sorszam].hozzavalo, token);
            hozzavalok++;
        }
        else if(sorszam!=0)
        {
            token=strtok(sor, ":");
            for(i=0; i<hozzavalok-1; i++)
            {
                token=strtok(NULL, ",");
                if(strcmp(kul[i].hozzavalo, token)!=0)
                {
                    strcpy(kul[hozzavalok].hozzavalo, token);
                    hozzavalok++;
                    break;
                }
            }
            token=strtok(NULL, '\n');
            for(i=0; i<hozzavalok; i++)
            {
                if(strcmp(kul[i].hozzavalo, token)!=0)
                {
                    strcpy(kul[hozzavalok].hozzavalo, token);
                    hozzavalok++;
                    break;
                }
            }
        }
        sorszam++;
    }

    return 0;
}
