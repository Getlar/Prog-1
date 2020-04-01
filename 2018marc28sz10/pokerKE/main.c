#include <stdio.h>
#include <stdlib.h>
int royale(int s[],int t[])
{
    int i;
    int el=0;
    int bel=0;
    if(s[12]==1 && s[11]==1 && s[10]==1 && s[9]==1 && s[8]==1){
            bel=1;
    }
    for(i=0;i<4;i++){
        if(t[i]==5)
        el=1;
    }
    if(el && bel)
        printf("Royal flush\n");
    else
        printf("Not royal flush\n");

}
int main()
{
    int ertek[13]={0};
    int fajta[4]={0};
    int i;
    char be[15];
    gets(be);
    while(!feof(stdin))
    {
        for (i=0;i<14;i++)
        {
            if(be[i]=='C')
                fajta[0]++;
            if(be[i]=='H')
                fajta[1]++;
            if(be[i]=='D')
                fajta[2]++;
            if(be[i]=='S')
                fajta[3]++;
            if(be[i]=='2')
                ertek[0]++;
            if(be[i]=='3')
                ertek[1]++;
            if(be[i]=='4')
                ertek[2]++;
            if(be[i]=='5')
                ertek[3]++;
            if(be[i]=='6')
                ertek[4]++;
            if(be[i]=='7')
                ertek[5]++;
            if(be[i]=='8')
                ertek[6]++;
            if(be[i]=='9')
                ertek[7]++;
            if(be[i]=='T')
                ertek[8]++;
            if(be[i]=='J')
                ertek[9]++;
            if(be[i]=='Q')
                ertek[10]++;
            if(be[i]=='K')
                ertek[11]++;
            if(be[i]=='A')
                ertek[12]++;
        }
        royale(ertek,fajta);
        for(i=0;i<13;i++)
            ertek[i]=0;
        for(i=0;i<4;i++)
            fajta[i]=0;
        gets(be);
    }
    return 0;
}
