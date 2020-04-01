#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct gyumik
{
    char gyumolcs[100];
}GYUMIK;

int main(int argc, char* argv[])
{
    int i, n=0;
    GYUMIK* kimenet=(GYUMIK*) malloc(n*sizeof(GYUMIK));

    for(i=0; i<argc-1; i++)
    {
        if(i==0)
        {
            n++;
            realloc(kimenet, n*sizeof(GYUMIK));
            strcpy(kimenet[n-1].gyumolcs, argv[i+1]);
        }
        else if(strlen(kimenet[n-1].gyumolcs)>strlen(argv[i+1]))
        {
            n=1;
            realloc(kimenet,n*sizeof(GYUMIK));
            strcpy(kimenet[n-1].gyumolcs, argv[i+1]);
        }
        else if(strlen(kimenet[n-1].gyumolcs)==strlen(argv[i+1]))
        {
            n++;
            realloc(kimenet, n*sizeof(GYUMIK));
            strcpy(kimenet[n-1].gyumolcs, argv[i+1]);
        }
    }
    for(i=0; i<n; i++)
    {
        puts(kimenet[i].gyumolcs);
    }
    return 0;
}
