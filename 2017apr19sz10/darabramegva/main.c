#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    int i;
    int x;
    char szo[50];
    int abc[26]={0};
    scanf("%d",&a);
    while(!feof(stdin))
    {
        scanf("%s",szo);
        for(i=0;i<strlen(szo);i++)
        {
            if(szo[i]>='a' && szo[i]<='z')
            {
                x=szo[i]-'a';
                abc[x]++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(a==abc[i])
            {
                a=1;
            }

        }
        if(a==1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
        for(i=0;i<26;i++)
        {
            abc[i]=0;
        }
        scanf("%d",&a);
    }
    return 0;
}
