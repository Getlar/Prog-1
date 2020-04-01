#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    int a;
    int tmp;
    int b[31]={0};
    scanf("%d",&a);
    while(!feof(stdin)){
            int apa=1;
        for(i=0;i<a;i++)
            {
            scanf("%d",&tmp);
            b[tmp]++;
            }
        for(i=0;i<31;i++){
            if(b[i]==1){
            apa=0;
            break;
            }
        }
    if (apa==1){
        printf("Nobody wins\n");
    }
    else{
        printf("%d\n",i);
    }
    for(i=0;i<32;i++){
        b[i]=0;
    }
    scanf("%d",&a);
    }
    return 0;
}
