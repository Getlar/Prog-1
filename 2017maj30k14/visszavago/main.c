#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *foo(char *t)
{
    char * token;
    char * tmp = (char*)malloc(strlen(t)*sizeof(char));
    char * vissza = (char*)malloc(strlen(tmp)*sizeof(char));
    strcpy(tmp,t);
    token=strtok(tmp,"-");
    char * haza=(char*)malloc(strlen(token)*sizeof(char));
    strcpy(haza,token);
    token=strtok(NULL,"\0\n");
    strcpy(vissza,token);
    strcat(vissza,"-");
    strcat(vissza,haza);
    return vissza;
}
