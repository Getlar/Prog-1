#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,tmp,a,f,l;
    int k=0;
    int z=0;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        for(i=0;i<a;i++)
        {
            scanf("%d",&tmp);
            k=0;
            if(tmp==1)
            {
                printf("*\n");
                z++;
            }
            if(tmp==2)
            {
                printf("*\n");
                z++;
                printf("**\n");
            }
            if(tmp>=3)
               {
                printf("*\n");
                printf("**\n");
            for(j=2;j<tmp-1;j++)
            {
                printf("*");
                for(l=0;l<k+1;l++)
                {
                    printf(" ");
                }
                k++;
                printf("*\n");
            }
            for(f=0;f<tmp;f++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i<a-1 || i+z<a-1)
        printf("\n");
        }
    scanf("%d",&a);
    }
    return 0;
}
