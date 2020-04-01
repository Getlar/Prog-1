#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int n=0;
    int* szamok=(int*)malloc(sizeof(int)*n);
    int osszeg=0;
    int i;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        printf("%d:",a);
        for(i=1;i<a+1;i++)
        {
            if(a%i==0)
            {
                n++;
                szamok=realloc(szamok,n*sizeof(int));
                szamok[n-1]=i;
                osszeg=osszeg+i;
            }
        }
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                printf(" %d +",szamok[i]);
            }
            if(i==n-1)
            {
                printf(" %d = %d\n",szamok[i],osszeg);
            }
        }
        n=0;
        szamok=realloc(szamok,n*sizeof(int));
        osszeg=0;
        scanf("%d",&a);
    }
    free(szamok);
    return 0;
}
