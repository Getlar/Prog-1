#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a;
    int tmp;
    int min;
    int max;
    int minh;
    int maxh;
    scanf("%d",&a);
    while(!feof(stdin))
    {
        int t[100];
        for(i=0;i<a;i++){
            scanf("%d",&tmp);
            t[i]=tmp;
        }
        min=t[0];
        max=t[0];
        for(i=1;i<a;i++){
            if(t[i]<min)
                {
                min=t[i];
                }}
            for(i=1;i<a;i++){
            if(t[i]>max)
            {
                max=t[i];
            }}
        minh=0;
        maxh=0;
        for(i=0;i<a;i++){
            if(t[i]==max)
            maxh++;
            if(t[i]==min)
            minh++;
        }
        printf("%d %d\n",minh,maxh);
        scanf("%d",&a);
}

    return 0;
}
