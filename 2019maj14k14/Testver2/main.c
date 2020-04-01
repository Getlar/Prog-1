#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct emberek
{
    char nev[22];
}EMBEREK;
typedef struct element
{
    char name[20];
    int hour;
    int minute;
}ELEMENT;

int main(int argc, char* argv[])
{
    FILE* fin=fopen(argv[1],"rb");
    ELEMENT tmp;
    int n=0;
    int kapcs=0;
    int m=0;
    int i;
    int j;
    EMBEREK* kimenet2=(EMBEREK*)malloc(sizeof(EMBEREK)*m);
    if(fin==NULL)
    {
        fprintf(stderr,"Hiba az allomany olvasasanal!\n");
        exit(1);
    }
    while(fread(&tmp,sizeof(ELEMENT),1,fin)>0)
    {
        n++;
    }
    rewind(fin);
    ELEMENT kimenet[n];
    fread(kimenet,sizeof(ELEMENT),n,fin);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            m++;
            kimenet2=realloc(kimenet2,m*sizeof(EMBEREK));
            strcpy(kimenet2[i].nev,kimenet[i].name);
        }
        else
        {
            for(j=0;j<m;j++)
            {
                if(strcmp(kimenet2[j].nev,kimenet[i].name)==0)
                {
                    kapcs=0;
                    break;
                }
                else
                {
                    kapcs=1;
                }
            }
            if(kapcs==1)
            {
                m++;
                kimenet2=realloc(kimenet2,m*sizeof(EMBEREK));
                strcpy(kimenet2[i].nev,kimenet[i].name);
            }
        }
        kapcs=0;
    }
    printf("%d\n",m);
    return EXIT_SUCCESS;
}
