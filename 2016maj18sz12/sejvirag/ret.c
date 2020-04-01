#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1],"r");
    int i,j;
    while(1)
    {
        int sz,h;
        fscanf(fp,"%d %d\n",&sz,&h);
        if(feof(fp))
        {
            break;
        }
        int bet[26] = {0};
        int kul = 0;
        char str[sz+2];
        for(i=0;i<h;i++)
        {
            fgets(str,sz+2,fp);
            for(j=0;j<sz;j++)
            {
                if(isalpha(str[j]))
                {
                    bet[str[j]-'A'] = 1;
                }
            }
        }
        for(i=0;i<26;i++)
        {
            if(bet[i] == 1)
            {
                kul++;
            }
        }
        printf("%d\n",kul);
    }
    fclose(fp);
    return 0;
}
