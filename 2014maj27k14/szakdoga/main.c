#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct eredmeny
{
  char nev[ 33 ];
  char neptun[ 7 ];
  int pont[ 5 ];
}EREDMENY;

typedef struct bukottak
{
    char nev[33];
    char neptun[7];
}BUKOTTAK;

int rendez (const void*a, const void*b)
{
    BUKOTTAK* pa=(BUKOTTAK*)a;
    BUKOTTAK* pb=(BUKOTTAK*)b;
    return strcmp(pa->neptun,pb->neptun);
}
int main(int argc,char*argv[])
{
    FILE* fin=fopen(argv[1],"rb");
    EREDMENY tmp;
    int hanyszor=0;
    int n=0;
    int i,j;
    BUKOTTAK* kimenet2=(BUKOTTAK*)malloc(n*sizeof(BUKOTTAK));
    while(fread(&tmp,sizeof(EREDMENY),1,fin)>0)
    {
        hanyszor++;
    }
    rewind(fin);
    EREDMENY kimenet[hanyszor];
    fread(kimenet,sizeof(EREDMENY),hanyszor,fin);
    for(i=0;i<hanyszor;i++)
    {
        for(j=0;j<5;j++)
        {
            if(kimenet[i].pont[j]==1)
            {
                n++;
                kimenet2=realloc(kimenet2,n*sizeof(BUKOTTAK));
                strcpy(kimenet2[n-1].nev,kimenet[i].nev);
                strcpy(kimenet2[n-1].neptun,kimenet[i].neptun);
                break;
            }
        }
    }
    qsort(kimenet2,n,sizeof(BUKOTTAK),rendez);
    for(i=0;i<n;i++)
    {
        printf("%s (%s)\n",kimenet2[i].nev,kimenet2[i].neptun);
    }
    fclose(fin);
    free(kimenet2);
    return 0;
}
