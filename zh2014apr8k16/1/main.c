#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ora1,ora2,perc1,perc2;
    while(scanf("%d %d %d %d",&ora1,&perc1,&ora2,&perc2)>-1)
    {
        if (ora1==-1)
            return 0;
        if(ora1>ora2)
            printf(">\n");
        else if(ora2>ora1)
            printf("<\n");
        else if(ora1==ora2){
            if(perc1>perc2)
                printf(">\n");
            else if(perc2>perc1)
                printf("<\n");
            else if(perc1==perc2)
                printf("=\n");
        }
    }

    return 0;
}
