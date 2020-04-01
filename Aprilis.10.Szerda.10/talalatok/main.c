#include <stdio.h>
#include <string.h>

int mennyiszer(const char *str,const char *ker){
    int mennyi = 0;
    int i,j;
    for(i=0;str[i]!='\0';i++){
        int ell = 1;
        for(j=0;ker[j]!='\0';j++)if(str[i+j] != ker[j])ell = 0;
        if(ell)mennyi++;
    }
    return mennyi;
}

int main(){
    char ker[11];
    char be[31];

    fgets(ker,11,stdin);
    if(ker[strlen(ker)-1] == '\n')ker[strlen(ker)-1] ='\0';
    fgets(be,31,stdin);
    if(be[strlen(be)-1] == '\n')be[strlen(be)-1] ='\0';
    while(strcmp(be,"THE END")){
        printf("%d\n",mennyiszer(be,ker));
        fgets(be,31,stdin);
        if(be[strlen(be)-1] == '\n')be[strlen(be)-1] ='\0';
    }

    return 0;
}
