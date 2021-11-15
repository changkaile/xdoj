/**/
#include"stdio.h"
double function(int n)
{
	double i=1,a;
	if(n==1)
	{
		a=1;
	}
	while(i<n)
	{
		a=1/(1+a);
		i++;
	}
	return a;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%f",function(n));
	return 0;
 } 
