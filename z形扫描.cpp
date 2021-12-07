#include"stdio.h"
int main()
{
	int n,i=0,j=0,t=0,m;
	scanf("%d",&n);
	int a[n][n],b[(n-1)*(n-1)];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	m=i+j;
	for(m=0;m<=2*n-2;m++)
	{
		if(m<=n-1)
		{
		
		if(m%2!=0)
		{
			for(i=0,j=m;i<=m,j>=0;i++,j--)
			{
				printf("%d ",a[i][j]);
			}
		}
		else
		{
			for(i=m,j=0;i>=0,j<=m;i--,j++)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	if(m>=n&&m<=2*n-2)
	{
	
	{
		if(m%2==0)
		{
			for(i=n-1,j=m-n+1;i>=m-n+1,j<=n-1;i--,j++)
			{
				printf("%d ",a[i][j]);
			}
		}
		else
		{
			for(i=m-n+1,j=n-1;i<=n-1,j>=m-n+1;i++,j--)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	}
	 } 
	 
	return 0;
}
