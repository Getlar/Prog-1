#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i=0;
    int a;
    int j;
    int l;
    int mennyi;
    int betuk[26]={0};
    char szo[51];
    scanf("%d",&a);
    while(!feof(stdin))
    {
        mennyi=0;
        scanf("%s",szo);
        for(j=0;j<strlen(szo);j++)
        {
            if(szo[j]>='a' && szo[j]<='z')
            {
                i=szo[j]-'a';
                betuk[i]++;
            }
        }
        for(l=0;l<26;l++)
        {
            if(betuk[l]>0)
            {
                mennyi++;
            }
        }
        if(a<mennyi)
        {
            printf("Average\n");
        }
        if(a==mennyi)
        {
            printf("Good\n");
        }
        if(a>mennyi)
        {
            printf("Bad\n");
        }
        for(j=0;j<26;j++)
        {
            betuk[j]=0;
        }
        scanf("%d",&a);
    }
    return 0;
}
