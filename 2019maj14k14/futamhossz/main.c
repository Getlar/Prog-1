#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* foo(const char *t)
{
    char str[strlen(t)+1];
    strcpy(str,t);
    int minM = 0;
    for(int i=1;i<strlen(str);i+=2)
    {
        minM = minM+atoi(str+i);
    }
    char * ret = (char *) malloc(sizeof(char) *(minM+2));
    for(int i=0;i<minM;i++)
    {
        ret[i] ='\0';
    }
    for(int i=0;i<strlen(str);i+=2)
    {
        int m = strlen(ret);
        for(int j=0;j<atoi(str+i+1);j++){
            ret[m+j] = str[i];
        }
    }
    return ret;
}
int main(){
    char *s[] = {"h1e1l2o1","w1o1r1l1d1","M1i1s2i1s2i1p2i1"};
    int i;

    for(i=0;i<sizeof(s)/sizeof(char *);i++){
        char *p = foo(s[i]);
        printf("%s\n",p);
        free(p);
    }
    return EXIT_SUCCESS;
}
