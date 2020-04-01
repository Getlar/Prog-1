#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int foo(const char* email)
{
    int i, kukac=0, kukachely=0, kapcs=1, pontszam=0;

    for(i=0; i<strlen(email); i++)
    {
        if((email[i]>='A' && email[i]<='z') || email[i]=='.' || email[i]=='_' ||  email[i]=='-')
        {
            kapcs=1;
        }
        else if(email[i]=='@')
        {
            kukac++;
            kukachely=i;
        }
        else
        {
            kapcs=0;
            break;
        }
    }
    if(kukac!=1 || kapcs==0)
    {
        return 0;
    }
    for(i=kukachely; i<strlen(email)-1; i++)
    {
        if(email[i]=='.')
        {
            pontszam++;
            if(email[i-1]!='@' && email[i-1]!='.' && email[i+1]!='@' && email[i+1]!='.')
            {
                kapcs=1;
            }
            else
            {
                kapcs=0;
                break;
            }
        }
    }
    if(email[strlen(email)-1]=='@' || email[strlen(email)-1]=='.')
    {
        kapcs=0;
    }
    if(kapcs==1 && pontszam>=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int valid = foo("noreply@unideb.hu");
    if (valid)
        puts("Valid e-mail address!");
    else
        puts("Invalid e-mail address!");
    return EXIT_SUCCESS;
}
