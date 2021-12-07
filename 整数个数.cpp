#include"stdio.h"
int max(int a[],int n)
{
	int i;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int m=max(arr,n);
	int t,a=0;
	for(t=1;t<=m;t++)
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]==t)
			{
				a++;
			}
		}
		if(a!=0)
		printf("%d:%d\n",t,a);
		a=0;
	
	}
	return 0;
}
