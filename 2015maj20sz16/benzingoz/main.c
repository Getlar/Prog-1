#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct car
{
    char type[30];
    int max_speed;
    char fuel;
}ELEMENT;
int rendez(const void* a, const void*b)
{
    ELEMENT* pa=(ELEMENT*)a;
    ELEMENT* pb=(ELEMENT*)b;
    if(pa->max_speed > pb->max_speed)
    {
        return -1;
    }
    else if(pa->max_speed < pb->max_speed)
    {
        return 1;
    }
    else
    {
        return strcmp(pa->type,pb->type);
    }
}
struct car *foo(char *filenev, int keresett)
{
    FILE*fin=fopen(filenev,"rb");
    ELEMENT tmp;
    int hanyszor=0;
    int mennyinel=0;
    while(fread(&tmp,sizeof(ELEMENT),1,fin)>0)
    {
        if(tmp.fuel=='B' && tmp.max_speed > keresett){
        hanyszor++;
        }
    }
    rewind(fin);
    ELEMENT*kimenet=(ELEMENT*)malloc((hanyszor+1)*sizeof(ELEMENT));
    while (fread(&tmp,sizeof(ELEMENT),1,fin)>0)
    {
        if(tmp.fuel=='B' && tmp.max_speed > keresett)
        {
            kimenet[mennyinel]=tmp;
            mennyinel++;
        }
    }
    qsort(kimenet,hanyszor,sizeof(ELEMENT),rendez);
    kimenet[hanyszor].max_speed=-1;
    fclose(fin);
    return kimenet;
}
int main()
{
    struct car *p = foo("foo.bin", 100);
    int i;
    for (i = 0; p[i].max_speed >= 0; ++i)
        printf("*%s* (%d, %c)\n", p[i].type, p[i].max_speed, p[i].fuel);
    free(p);
    return EXIT_SUCCESS;
}
