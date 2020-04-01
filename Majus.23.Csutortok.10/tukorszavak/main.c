#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char *s, const char *t)
{
    int i;
    int j;
    int kapcs=0;
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
    {
        if(s[i]!=t[j])
        {
            kapcs=1;
            break;
        }
    }
    if(kapcs)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char *t[] = {"aba", "aba", "cba", "abc"};
    int i, j;
    for (i = 0; i < sizeof(t) / sizeof(char *); ++i)
        for (j = 0; j < sizeof(t) / sizeof(char *); ++j)
            printf("%s\n", foo(t[i], t[j]) ? "YES" : "NO");
    return EXIT_SUCCESS;
}
