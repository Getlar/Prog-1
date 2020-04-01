#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
    float ki=0;
    char apad[1];
    float n=atof(argv[1]);
    float m=atof(argv[2]);
    strcpy(apad,argv[3]);
    printf("%f%f%c",n,m,apad[0]);
    if(n<0 || m<0)
    {
        if(apad[0]!='+' && apad[0]!='-')
        {
            printf("NO\n");
            return 0;
        }
        if(apad[0]=='+')
        {
            ki=n+m;
        }
        if(apad[0]=='-')
        {
            ki=n-m;
        }
    }
    else if(n<0 && m<0)
    {
        if(apad[0]!='+' && apad[0]!='-')
        {
            printf("YES\n");
        }
        if(apad[0]=='+')
        {
            ki=n+m;
        }
        if(apad[0]=='-')
        {
            ki=n-m;
        }
    }
    if(ki>=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
