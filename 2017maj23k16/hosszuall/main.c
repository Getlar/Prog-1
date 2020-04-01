#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dolgok{
char nev[100];
int hossz;
}DOLGOK;
int rendezes(const void*a,const void*b)
{
    DOLGOK* pa=(DOLGOK*)a;
    DOLGOK* pb=(DOLGOK*)b;
    if(pa->hossz > pb->hossz)
    {
        return -1;
    }
    if(pa->hossz < pb->hossz)
    {
        return 1;
    }
    else
    {
        return strcmp(pa->nev,pb->nev);
    }
}
int main(int argc,char * argv[])
{
    FILE* fin;
    int n;
    int m=0;
    int i;
    DOLGOK * dolgok=(DOLGOK*) malloc(m*sizeof(DOLGOK));
    for(i=1;i<argc;i++)
    {
        m++;
        dolgok=realloc(dolgok,m*sizeof(DOLGOK));
        fin=fopen(argv[i],"r");
        fseek(fin,0,SEEK_END);
        n=ftell(fin);
        dolgok[i-1].hossz=n;
        strcpy(dolgok[i-1].nev,argv[i]);
        fclose(fin);
    }
    qsort(dolgok,m,sizeof(DOLGOK),rendezes);
    for(i=0;i<m;i++)
    {
        puts(dolgok[i].nev);
    }
    return 0;
}
