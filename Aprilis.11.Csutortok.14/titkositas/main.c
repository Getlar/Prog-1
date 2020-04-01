#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[82];
    char ki[81];
    while(1){
        int k=0;
        fgets(str,82,stdin);
        str[strlen(str)-1] ='\0';
        if(strcmp(str,"THE END")==0)
        {
            break;
        }
        strcpy(ki,str);
        for(int i = strlen(str)-1;i>=0;i--)
        {
            if(isalpha(ki[i]))
            {
                if(isalpha(str[k]))
                {
                    ki[i] = str[k];
                }
                else
                {
                    i++;
                }
                k++;
            }
        }
        printf("%s\n",ki);
    }
    return 0;
}
