#include"stdio.h"
void move(int *a,int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		int t=*(a+n-1);
		for(j=n-2;j>=0;j--)
		{
			*(a+j+1)=*(a+j);
		}
		*a=t;
	}
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	move(a,10,4); 
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
