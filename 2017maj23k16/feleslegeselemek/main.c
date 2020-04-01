#include <stdio.h>
#include <stdlib.h>
int foo(char *filename)
{
    int
    c;
    int felesleges=0;
    int bent = 0;
    FILE * fp = fopen(filename,"r");
    while((c = fgetc(fp))!=EOF)
    {
        if(c == ' ')
        {
            bent = 1;
            felesleges++;
        }
        else if(bent)
        {
            bent = 0;
            felesleges--;
        }
    }
    fclose(fp);
    return felesleges;
}

