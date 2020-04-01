#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(char *s)
{
    int i,j=0;
    int maxhany=1;
    int hany=1;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i]==s[i+1])
            {
            while(s[i]!=s[j])
            {
                hany++;
                j++;
            }
            }
        }
         i=j+1;
    }
    if(hany>maxhany)
        {
            maxhany=hany;
        }
    return maxhany;
}
int main()
{
    char line[100];
    while (gets(line) != NULL)
        printf("%d\n", foo(line));
    return EXIT_SUCCESS;
}
