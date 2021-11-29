#include"stdio.h"
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	int a[n][n];
	int b[2*n+2];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i]+=a[i][j];
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			b[j+n]+=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		b[2*n]+=a[i][i];
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		b[2*n+1]+=a[i][j];
	}
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<2*n+1-i;j++)
		{
			int t;
			if(b[j+1]>b[j])
			{
			
			t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
			}
		}
	}
	for(i=0;i<2*n+2;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
