#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int foo(char *s)
{
  int i,j,k,l;
  int hely1=0;
  int hely2=0;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]=='X')
      {
        hely1=i;
        for(j=i+1;j<strlen(s);j++)
        {
          if(s[j]=='X')
          {
            hely2=j;
            break;
          }
        }
      for(k=hely1;k<hely2;k++)
      {
        if(s[k]=='>')
          {
            for(l=k;l<hely2;l++)
            {
              if(s[l]=='<')
              {
                  return 0;
              }
            }
          }
        if(s[k]=='<')
         {
           for(l=k;l>hely1;l--)
           {
             if(s[l]=='>')
             {
                return 0;
             }
           }
         }
       }
     }
   }
  return 1;
}
