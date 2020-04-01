#include <stdio.h>
#include <stdlib.h>

int main()
{int N,i, max,min, jelenlegi;

  while(scanf("%d",&N)>-1 && N!=0)
  {
    scanf("%d",&jelenlegi);
    max=jelenlegi;
    min=jelenlegi;

    for(i=0;i<N-1;i++)
    {
     scanf("%d",&jelenlegi);
     if(jelenlegi>max) max=jelenlegi;
     if(jelenlegi<min) min=jelenlegi;
    }

    printf("%d %d\n",min,max);

  }

  return 0;
}
