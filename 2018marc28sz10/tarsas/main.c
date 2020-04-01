#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[21];
    char l[21];
    int a;
    int uni1;
    int peti;
    int uni2;
    int nyert=0;
    int holt=0;
    int i;
    scanf("%s %s %d",&t,&l,&a);
        for(i=0;i<a;i++){
            scanf("%d %d %d",&peti,&uni1,&uni2);
            if(peti>=uni1 && peti>=uni2){
                nyert++;
                if(peti==uni1 || peti==uni2)
                holt++;
            }
        }
    printf("%d %d\n",nyert,holt);
    return 0;
}
