void foo(const char *t, char *s)
{
    int i;
    int j;
    strcpy(s,t);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='*')
        {
            for(j=i-1;s[j]!='=';j--)
            ;
            s[j]='*';
            s[i]='=';
        }
    }
}
