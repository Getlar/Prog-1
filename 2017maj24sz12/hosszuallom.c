#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i, hossz, kapcs;
    char sor[10000];

    for(i=1; i<argc; i++)
    {
        FILE* fin=fopen(argv[i], "r");
        fgets(sor, 10000, fin);
        if(i==1)
        {
            hossz=strlen(sor);
        }
        else if(i!=1)
        {
            if(strlen(sor)>hossz)
            {
                kapcs=1;
            }
            else
            {
                kapcs=0;
                break;
            }
        }
        hossz=strlen(sor);
    }
    if(kapcs==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
