#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct gyumik
{
    char gyumolcs[17];
}GYUMIK;

int rendezes(const void* a, const void* b)
{
    GYUMIK* pa=(GYUMIK*) a;
    GYUMIK* pb=(GYUMIK*) b;

    return(strcmp(pa->gyumolcs, pb->gyumolcs));
}

int main(int argc, char* argv[])
{
    int hanysor=0, i;
    char sor[17];
    GYUMIK kimenet[1001];
    FILE* fin=fopen(argv[1], "r");

    while(fgets(sor, 17, fin)!=NULL)
    {
        if(sor[strlen(sor)-1]=='\n')
        {
            sor[strlen(sor)-1]='\0';
        }
        hanysor++;
        strcpy(kimenet[hanysor-1].gyumolcs, sor);
    }
    qsort(kimenet, hanysor, sizeof(sor), rendezes);
    printf("%d\n", hanysor);
    for(i=0; i<hanysor; i++)
    {
        puts(kimenet[i].gyumolcs);
    }
    return 0;
}
