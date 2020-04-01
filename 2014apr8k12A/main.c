int is_c_identifier(char *s)
{
  int i;

        if (     s[0] == '\0'  ) return 0;
        else if (s[0] == '\n' && s[0] == '\0') return 0;
        else if (!islower(s[0]) && s[0] == '_' )
    return 0;

  for (i=1; s[i]; i++)

         if ( s[i] == '_' && !islower(s[i+1]) ) return 0;
        else if ( s[i] == '_' && s[i+1] == '_' ) return 0;
    else if (!islower(s[i]) && s[i] != '_')  return 0;
  return 1;
}
