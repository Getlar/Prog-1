#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    FILE* fin=fopen(argv[1], "r");
    int sz, h, hossz, i, j, k;
    int maxhossz=0;
    char sor[41];
    while(fscanf(fin, "%d %d", &sz, &h)!=EOF)
    {
        printf("%d %d",h,sz);
        for(i=0; i<h; i++)
        {
            fgets(sor, 41, fin);
            if(sor[strlen(sor)-1]=='\n')
            {
                sor[strlen(sor)-1]='\0';
            }
            for(j=0; j<sz; j++)
            {
                if(sor[j]=='O' && sor[j+1]=='X')
                {
                    for(k=j+2; k<sz; k++)
                    {
                        if(sor[k]=='O')
                        {
                            hossz=k-j+1;
                            if(maxhossz<hossz)
                            {
                                maxhossz=hossz;
                                hossz=0;
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", maxhossz);
        maxhossz=0;
    }
    return 0;
}
