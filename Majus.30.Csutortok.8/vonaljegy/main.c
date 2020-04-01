#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[5];
    int i;
    int x = 0;
    int sor=0;
    int n=0;
    int*kimenet=(int*)malloc(sizeof(int)*n);
    while(fgets(str,5,stdin)!=NULL)
    {
        sor=sor+3;
        for(i=0;i<strlen(str)-1;i++)
        {
            if(str[i]=='o')
            {
                n++;
                kimenet=realloc(kimenet,n*sizeof(int));
                kimenet[n-1]=sor-2+i;
            }
            else
            {
                x++;
            }
        }
        if(sor >= 9)
        {
            if(x==9)
            {
                putchar('0');
            }
            putchar('\n');
            for(i=0;i<n;i++)
            {
                if(i!=n-1)
                {
                    printf("%d",kimenet[i]);
                }
                if(i==n-1)
                {
                    printf("%d\n",kimenet[i]);
                }
            }
            n=0;
            kimenet=realloc(kimenet,n*sizeof(int));
            sor = 0;
            x = 0;
        }
    }
    return 0;
}
