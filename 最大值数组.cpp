#include"stdio.h"
int main()
{
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
	 for(j=0;j<3;j++)
	 	{
		 scanf("%d",&a[i][j]);
	    }
	}
	int max; 
	max=a[0][0];
	int line,col;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
				line=i;
				col=j;
			}
		}
	}
	printf("%d %d %d",max,line,col);
	return 0;
 } 
