int double_double_letters( char * s)
{
    int osszeg=0;
    int i;
    for(i=0;s[i];i++)
    {
        if (s[i]=='c' && s[i+1]=='c' && s[i+2]=='s')
            osszeg++;
        else if(s[i]=='d' && s[i+1]=='d' && s[i+2]=='z')
            osszeg++;
        else if(s[i]=='g' && s[i+1]=='g' && s[i+2]=='y')
            osszeg++;
        else if(s[i]=='l' && s[i+1]=='l' && s[i+2]=='y')
            osszeg++;
        else if(s[i]=='n' && s[i+1]=='n' && s[i+2]=='y')
            osszeg++;
        else if(s[i]=='s' && s[i+1]=='s' && s[i+2]=='z')
            osszeg++;
        else if(s[i]=='t' && s[i+1]=='t' && s[i+2]=='y')
            osszeg++;
        else if(s[i]=='z' && s[i+1]=='z' && s[i+2]=='s')
            osszeg++;
    }
    return osszeg;
}
