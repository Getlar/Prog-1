#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct autok
{
    char orszag[3];
    int darab;
}AUTOK;

int rendezes(const void* a, const void* b)
{
    AUTOK* pa=(AUTOK*)a;
    AUTOK* pb=(AUTOK*)b;
    return strcmp(pa->orszag, pb->orszag);
}

int main()
{
    int kulorszag=1, i;
    char* token;
    char sor[30];
    AUTOK kimenet[20];
    FILE* fin = fopen("sample.txt", "r");
    for(i=0; i<20; i++)
    {
        kimenet[i].darab=0;
    }
    while(fgets(sor, 30, fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        token=strtok(sor, ";");
        for(i=0; i<kulorszag; i++)
        {
            if(strcmp(kimenet[i].orszag, token)!=0)
            {
                strcpy(kimenet[i].orszag, token);
                kimenet[i].darab++;
                kulorszag++;
                break;
            }
        }
    }
    qsort(kimenet, kulorszag, sizeof(kimenet), rendezes);
    for(i=0; i<kulorszag; i++)
    {
        printf("%s: %d", kimenet[i].orszag, kimenet[i].darab);
    }
    fclose(fin);
    return 0;
}
