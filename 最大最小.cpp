#include"stdio.h"
#include"math.h"
int zd(int a,int b,int c,int d)
{
	int max;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	if(max<d)
	{
		max=d;
	}
	return max;
}
int zx(int a,int b,int c,int d)
{
	int min;
	if(a<b)
	{
		min=a;
	}
	else
	{
		min=b;
	}
	if(min>c)
	{
		min=c;
	}
	if(min>d)
	{
		min=d;
	}
	return min;
}
int main()
{
	int a,b;
	int m,n,p,q; 
	scanf("%d %d",&a,&b);
	m=pow(a+b,2);
	n=pow(a-b,2);
	p=pow(a,2)-pow(b,2);
	q=pow(a,2)+pow(b,2);
	printf("%d %d",zd(m,n,p,q),zx(m,n,p,q));
	return 0;
}
