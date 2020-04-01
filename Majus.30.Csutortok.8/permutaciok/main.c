#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int foo(int *t){

    if(t[0]==0)
    {
        return 1;
    }
    int hanyszor;
    int n=0;
    for(int i=0;t[i]!=0;i++)
    {
        n++;
    }
    for(int j=1;j<=n;j++)
    {
        hanyszor = 0;
        for(int i=0;t[i]!=0;i++)
        {
            if(t[i] == j)
            {
                hanyszor++;
            }
        }
        if(hanyszor!=1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t[] = {3, 4, 1, 2, 0}, i;
    for (i = 0; i < sizeof(t) / sizeof(int); ++i)
        printf("%s\n", foo(&t[i]) ? "YES" : "NO");
    return EXIT_SUCCESS;
}
