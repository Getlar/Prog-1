#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int foo(char *t[], int s, int o)
{
  int i,j,hossz,jo=0;
  char elso[100],vizsgalt[100];
  strcpy(elso,t[0]);
  hossz=strlen(elso);
  for(i=0;i<hossz;i++)
  {
    elso[i]=tolower(elso[i]);
  }
  for(i=0;i<s*o;i++)
  {
    strcpy(vizsgalt,t[i]);
    hossz=strlen(vizsgalt);
    for(j=0;j<hossz;j++)
    {
      vizsgalt[j]=tolower(vizsgalt[j]);
    }
    if(strcmp(elso,vizsgalt)==0) jo++;
  }
  if(jo==s*o)
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
    char *m[2][3] = {{"alma", "Alma", "aLMa"},
                     {"AlmA", "aLmA", "AlMa"}};
    if (foo(&m[0][0], 2, 3))
        puts("YES");
    else
        puts("NO");
    return EXIT_SUCCESS;
}
