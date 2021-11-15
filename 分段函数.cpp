#include"stdio.h"
int main()
{
	int x;
	int f;
	scanf("%d",&x);
	if(x<1)
	{
		f=x;
	}
	else if(x>=1&&x<10)
	{
		f=2*x-1;
	}
	else
	{
		f=3*x-11;
	}
	printf("%d",f);
	return 0;
}

