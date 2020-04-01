#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char be[7];
    int cel[]={1,1,1,1,1,1,1};
    char nev[21];
    int i;
    scanf("%s %s",&nev,&be);
    while(!feof(stdin))
    {
    for(i=0;i<7;i++)
        {
        if(be[i] == '-')
            {
        cel[i]=0;
            }
        }
    scanf("%s %s",&nev,&be);
    }
    for(i=0;i<7;i++)
    {
        if(cel[i]==1 && i==0)
        printf("Monday\n");
        if(cel[i]==1 && i==1)
        printf("Tuesday\n");
        if(cel[i]==1 && i==2)
        printf("Wednesday\n");
        if(cel[i]==1 && i==3)
        printf("Thursday\n");
        if(cel[i]==1 && i==4)
        printf("Friday\n");
        if(cel[i]==1 && i==5)
        printf("Saturday\n");
        if(cel[i]==1 && i==6)
        printf("Sunday\n");
    }
    return 0;
}
