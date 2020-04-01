#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nullaz(int t[])
{
    int i;
    for(i=0;i<14;i++)
    {
        t[i]=0;
    }
}
int sor(int t[])
{
    int i;
    int szam=0;
    for(i=0;i<14;i++)
    {
        if(t[i]==1 && t[i+1]==1)
            szam++;
    }
    if (szam==4)
        return 1;
    else
        return 0;
}

int main()
{
    char s[15];
    int t[14];
    int i;
    nullaz(t);
    gets(s);
    while(!feof(stdin))
    {
        for(i=1;i<strlen(s);i=i+3){
            if(s[i]=='2'){
                t[0]++;
                continue;}
            else if(s[i]=='3'){
                t[1]++;
                continue;}
            else if(s[i]=='4'){
                t[2]++;
                continue;}
            else if(s[i]=='5'){
                t[3]++;
                continue;}
            else if(s[i]=='6'){
                t[4]++;
                continue;}
            else if(s[i]=='7'){
                t[5]++;
                continue;}
            else if(s[i]=='8'){
                t[6]++;
                continue;}
            else if(s[i]=='9'){
                t[7]++;
                continue;}
            else if(s[i]=='T'){
                t[8]++;
                continue;}
            else if(s[i]=='J'){
                t[9]++;
                continue;}
            else if(s[i]=='Q'){
                t[10]++;
                continue;}
            else if(s[i]=='K'){
                t[11]++;
                continue;}
            else if(s[i]=='A'){
                t[12]++;
                continue;}
        }
    if(sor(t)){
        printf("Straight\n");}
    else{
        printf("Not straight\n");
    }
    gets(s);
    nullaz(t);
    }
    return 0;
}

