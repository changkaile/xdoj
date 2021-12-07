#include"stdio.h"
int main()
{
	int m,n;
	int i,j;
	scanf("%d %d\n",&m,&n);
	int a[m][n],b[m][n];
	if(m>=1&&m<=30&&n>=1&&n<=30)
	{
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=0;
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2])||(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j-1])||(a[i][j]==a[i][j-1]&&a[i][j]==a[i][j-2]))
			{
				b[i][j]=1;
				
			}
			if((a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j])||(a[i+1][j]==a[i][j]&&a[i][j]==a[i-1][j])||(a[i][j]==a[i-1][j]&&a[i][j]==a[i-2][j]))
			{
			 b[i][j]=1;
			}
			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j])
			{
				a[i][j]=0;
			}
		}
	
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
	return 0;
 } 
