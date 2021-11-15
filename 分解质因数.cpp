#include"stdio.h"
int ip(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
		{
		
	return 1;
		}
		else
		return 0;
	}
}

int main()
{
	int i;
	for(i=2;i<200;i++)
	{
		printf("%d ",ip(i));
	}
	return 0;
}
