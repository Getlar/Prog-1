#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a;
    int b=0;
    int j;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        for(i=0;i<a;a--,b++)
        {
            for(j=0;j<b+1;j++)
            {
                printf("*");
            }
            for(j=0;j<a-1;j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    scanf("%d",&a);
    b=0;
    }
    return 0;
}
