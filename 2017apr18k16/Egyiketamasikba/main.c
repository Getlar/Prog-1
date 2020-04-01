#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int x0,x1,y0,y1,sz0,sz1,m0,m1,x;
	scanf("%d %d %d %d",&x0,&y0,&sz0,&m0);
	enum {YES,NO} stat=YES;
	//for(x=0;x<3;x++)
	while(scanf("%d %d %d %d",&x1,&y1,&sz1,&m1)!=EOF)
	{
		//scanf("%d %d %d %d",&x1,&y1,&sz1,&m1);
		if (x0<x1 && y0<y1 && x0+sz0>x1+sz1 && y0+m0>y1+m1)
		{
			x0=x1,y0=y1,sz0=sz1,m0=m1;
		}
		else
		{
			stat=NO;
		}


	}
	if(stat == YES)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
    return 0;
}
