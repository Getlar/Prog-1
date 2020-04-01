#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char *s, const char *t)
{
    int betuk[26]={0};
    int betuk2[26]={0};
    int egyezok=0;
    int i;
    int a=0;
    for(i=0;i<strlen(s);i++)
    {
        switch(s[i])
        {
            case 'A' : betuk[0]++;break;
            case 'B' : betuk[1]++;break;
            case 'C' : betuk[2]++;break;
            case 'D' : betuk[3]++;break;
            case 'E' : betuk[4]++;break;
            case 'F' : betuk[5]++;break;
            case 'G' : betuk[6]++;break;
            case 'H' : betuk[7]++;break;
            case 'I' : betuk[8]++;break;
            case 'J' : betuk[9]++;break;
            case 'K' : betuk[10]++;break;
            case 'L' : betuk[11]++;break;
            case 'M' : betuk[12]++;break;
            case 'N' : betuk[13]++;break;
            case 'O' : betuk[14]++;break;
            case 'P' : betuk[15]++;break;
            case 'Q' : betuk[16]++;break;
            case 'R' : betuk[17]++;break;
            case 'S' : betuk[18]++;break;
            case 'T' : betuk[19]++;break;
            case 'U' : betuk[20]++;break;
            case 'V' : betuk[21]++;break;
            case 'W' : betuk[22]++;break;
            case 'X' : betuk[23]++;break;
            case 'Y' : betuk[24]++;break;
            case 'Z' : betuk[25]++;break;
            default :break;
        }
    }
    for(i=0;i<strlen(t);i++)
    {
        switch(t[i])
        {
            case 'A' : betuk2[0]++;break;
            case 'B' : betuk2[1]++;break;
            case 'C' : betuk2[2]++;break;
            case 'D' : betuk2[3]++;break;
            case 'E' : betuk2[4]++;break;
            case 'F' : betuk2[5]++;break;
            case 'G' : betuk2[6]++;break;
            case 'H' : betuk2[7]++;break;
            case 'I' : betuk2[8]++;break;
            case 'J' : betuk2[9]++;break;
            case 'K' : betuk2[10]++;break;
            case 'L' : betuk2[11]++;break;
            case 'M' : betuk2[12]++;break;
            case 'N' : betuk2[13]++;break;
            case 'O' : betuk2[14]++;break;
            case 'P' : betuk2[15]++;break;
            case 'Q' : betuk2[16]++;break;
            case 'R' : betuk2[17]++;break;
            case 'S' : betuk2[18]++;break;
            case 'T' : betuk2[19]++;break;
            case 'U' : betuk2[20]++;break;
            case 'V' : betuk2[21]++;break;
            case 'W' : betuk2[22]++;break;
            case 'X' : betuk2[23]++;break;
            case 'Y' : betuk2[24]++;break;
            case 'Z' : betuk2[25]++;break;
            default :break;
        }
    }
    for(i=0;i<26;i++)
    {
        if(betuk[i]==betuk2[i] || betuk2[i]>=betuk[i])
        {
            a=a+betuk[i];
        }
        else if(betuk[i]>=betuk2[i])
        {
            a=a+betuk2[i];
        }
    }
    return a;
}
