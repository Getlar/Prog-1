#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *delete( char *t, char *s)
{
    int i,hossz;
    char *uj;
    uj=(char*)calloc(sizeof(char),100);
    hossz=strlen(t);







}
int main()
{
    char s1[ 30 ], s2[ 30 ];
  char *delete( char *, char * );
  while ( scanf( "%s %s", s1, s2 ) != EOF )
  {
    char *p = delete( s1, s2 );
    puts( p );
    free( p );
  }
  return EXIT_SUCCESS;
}
