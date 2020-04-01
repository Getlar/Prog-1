#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, tmp, i, kapcs, j;
    int szamok[20];

    while(scanf("%d", &n)!=EOF)
    {
        kapcs=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &szamok[i]);
        }
        for(j=0; j<n; j++)
        {
            for(i=0; i<n-1; i++)
            {
                if(szamok[i]>szamok[i+1])
                {
                    tmp=szamok[i];
                    szamok[i]=szamok[i+1];
                    szamok[i+1]=tmp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(szamok[i]==i+1)
            {
                kapcs=1;
            }
            else
            {
                kapcs=0;
                break;
            }
        }
        if(kapcs==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
