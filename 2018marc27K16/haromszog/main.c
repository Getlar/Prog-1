#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int i;
    int a;
    int b=0;
    scanf("%d",&a);

    while(a){
        c=a;
        for(b=0;b<c;b++,a--){
            for(i=0;i<a-1;i++){
                printf(" ");
            }
            for(i=0;i<b+1;i++){
                printf("*");
            }
            printf("\n");
        }
    scanf("%d",&a);
    }
return 0;
}
