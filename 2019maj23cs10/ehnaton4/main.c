#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct element
{
    char name[20];
    int begin_year;
    int end_year;
}FARAO;

int rendez(const void*a, const void*b)
{
    FARAO* pa=(FARAO*)a;
    FARAO* pb=(FARAO*)b;
    if(pa->begin_year > pb->begin_year)
    {
        return 1;
    }
    else if (pa->begin_year < pa->begin_year)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char*argv[])
{
    FILE* fin=fopen(argv[1],"rb");
    FARAO tmp;
    int m=0;
    int i;
    while(fread(&tmp,sizeof(FARAO),1,fin)>0)
    {
        m++;
    }
    FARAO kimenet[m];
    rewind(fin);
    fread(kimenet,sizeof(FARAO),m,fin);
    qsort(kimenet,m,sizeof(FARAO),rendez);
    for(i=0;i<m;i++)
    {
        printf("%d - %d : %s\n",kimenet[i].begin_year,kimenet[i].end_year,kimenet[i].name);
    }
    return EXIT_SUCCESS;
}
