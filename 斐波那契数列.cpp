#include"stdio.h"
int count=0; 
int fib(int n)
{
	if(n==3)
	{
		count++;
	}
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",fib(a));
	printf("%d",count);
	return 0;
}
