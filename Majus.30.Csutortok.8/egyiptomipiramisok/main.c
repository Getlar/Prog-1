#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int top;
    int bal;
    int jobb;
    int kozep;
    scanf("%d %d %d",&top,&a,&b);
    while(!feof(stdin))
    {
        kozep=(top-(a+b))/2;
        bal=kozep+a;
        jobb=kozep+b;
        printf("%d %d %d\n",bal,jobb,kozep);
        scanf("%d %d %d",&top,&a,&b);
    }
    return 0;
}
