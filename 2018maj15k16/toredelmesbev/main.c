#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int n=atoi(argv[1]), i;
    FILE* fin=fopen(argv[2], "r");
    char sor[31];

    while(fgets(sor, 31, fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        if(strcmp(sor,"")==0)
        {
            printf("\n");
            continue;
        }
        for(i=0; i<strlen(sor); i++)
        {
            printf("%c", sor[i]);
            if((i+1)%n==0 || i==strlen(sor)-1)
            {
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
