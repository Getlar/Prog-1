#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int rendez(const void*a,const void*b)
{
    return *(char*)a-*(char*)b;
}
typedef struct betuk
{
    char elem;
    int hanyszor;
}BETUK;
int main()
{
    char sor[32];
    int i;
    int hanyvan=0;
    int hanyadik=0;
    BETUK* kimenet=(BETUK*)malloc(hanyadik*sizeof(BETUK));
    while(fgets(sor,32,stdin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        for(i=0;i<strlen(sor);i++)
        {
            sor[i]=toupper(sor[i]);
        }
        qsort(sor,strlen(sor),sizeof(char),rendez);
        for(i=0;i<strlen(sor);i++)
        {
            if(isalpha(sor[i]))
            {
                while(sor[i]==sor[i+1])
                {
                    hanyvan++;
                    i++;
                }
            }
            hanyadik++;
            kimenet=realloc(kimenet,hanyadik*sizeof(BETUK));
            kimenet[hanyadik-1].elem=sor[i];
            kimenet[hanyadik-1].hanyszor=hanyvan+1;
            hanyvan=0;
        }
        for(i=0;i<strlen(sor);i++)
        {
            printf("%c",sor[i]);
        }
        printf(" -");
        for(i=0;i<hanyadik;i++)
        {
            if(i!=hanyadik-1){
            printf(" %c: %d,",kimenet[i].elem,kimenet[i].hanyszor);
            }
            if(i==hanyadik-1)
            {
                printf(" %c: %d\n",kimenet[i].elem,kimenet[i].hanyszor);
            }
        }
        hanyadik=0;
        kimenet=realloc(kimenet,hanyadik*sizeof(BETUK));
    }
    free(kimenet);
    return 0;
}
