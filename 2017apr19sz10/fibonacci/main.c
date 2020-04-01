#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a;
    int szamok[50];
    int fibo[27]={0};
    int i,j;
    int szam=0;
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<26;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    scanf("%d",&a);
    while(a!=0)
    {
        szam=0;
        for(i=0;i<a;i++)
        {
            scanf("%d",&szamok[i]);
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<26;j++)
            {
                if(fibo[j]==1)
                {
                    j=j+1;
                }
                if(fibo[j]==szamok[i] )
                {
                    szam++;
                }
            }
        }
    if(szam==a)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    scanf("%d",&a);
    }
    return 0;
}
