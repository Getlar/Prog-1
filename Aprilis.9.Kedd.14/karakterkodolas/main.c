#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const void *s, const void *t)
{
    char* sa=*(char**)s;
    char* ta=*(char**)t;
    int osszeg1=0;
    int osszeg2=0;
    int i;
    for(i=0;i<strlen(sa);i++)
    {
        switch(sa[i])
        {
            case 'A':osszeg1=osszeg1+1;break;
            case 'B':osszeg1=osszeg1+2;break;
            case 'C':osszeg1=osszeg1+3;break;
            case 'D':osszeg1=osszeg1+4;break;
            case 'E':osszeg1=osszeg1+5;break;
            case 'F':osszeg1=osszeg1+6;break;
            case 'G':osszeg1=osszeg1+7;break;
            case 'H':osszeg1=osszeg1+8;break;
            case 'I':osszeg1=osszeg1+9;break;
            case 'J':osszeg1=osszeg1+10;break;
            case 'K':osszeg1=osszeg1+11;break;
            case 'L':osszeg1=osszeg1+12;break;
            case 'M':osszeg1=osszeg1+13;break;
            case 'N':osszeg1=osszeg1+14;break;
            case 'O':osszeg1=osszeg1+15;break;
            case 'P':osszeg1=osszeg1+16;break;
            case 'Q':osszeg1=osszeg1+17;break;
            case 'R':osszeg1=osszeg1+18;break;
            case 'S':osszeg1=osszeg1+19;break;
            case 'T':osszeg1=osszeg1+20;break;
            case 'U':osszeg1=osszeg1+21;break;
            case 'V':osszeg1=osszeg1+22;break;
            case 'W':osszeg1=osszeg1+23;break;
            case 'X':osszeg1=osszeg1+24;break;
            case 'Y':osszeg1=osszeg1+25;break;
            case 'Z':osszeg1=osszeg1+26;break;
            default :osszeg1=osszeg1+0;break;
        }
    }
    for(i=0;i<strlen(ta);i++)
    {
        switch(ta[i])
        {
            case 'A':osszeg2=osszeg2+1;break;
            case 'B':osszeg2=osszeg2+2;break;
            case 'C':osszeg2=osszeg2+3;break;
            case 'D':osszeg2=osszeg2+4;break;
            case 'E':osszeg2=osszeg2+5;break;
            case 'F':osszeg2=osszeg2+6;break;
            case 'G':osszeg2=osszeg2+7;break;
            case 'H':osszeg2=osszeg2+8;break;
            case 'I':osszeg2=osszeg2+9;break;
            case 'J':osszeg2=osszeg2+10;break;
            case 'K':osszeg2=osszeg2+11;break;
            case 'L':osszeg2=osszeg2+12;break;
            case 'M':osszeg2=osszeg2+13;break;
            case 'N':osszeg2=osszeg2+14;break;
            case 'O':osszeg2=osszeg2+15;break;
            case 'P':osszeg2=osszeg2+16;break;
            case 'Q':osszeg2=osszeg2+17;break;
            case 'R':osszeg2=osszeg2+18;break;
            case 'S':osszeg2=osszeg2+19;break;
            case 'T':osszeg2=osszeg2+20;break;
            case 'U':osszeg2=osszeg2+21;break;
            case 'V':osszeg2=osszeg2+22;break;
            case 'W':osszeg2=osszeg2+23;break;
            case 'X':osszeg2=osszeg2+24;break;
            case 'Y':osszeg2=osszeg2+25;break;
            case 'Z':osszeg2=osszeg2+26;break;
            default :osszeg2=osszeg2+0;break;
        }
    }
    if(osszeg1 > osszeg2)
    {
        return 1;
    }
    else if(osszeg1 < osszeg2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
