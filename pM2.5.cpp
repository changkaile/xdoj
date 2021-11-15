
#include"stdio.h"
int main()
{
	int a;
	int count=1;
	int b;
	float c=0.0,p;
	int d=0,e=0,f=0,g=0,h=0,i=0;
	scanf("%d",&a);
	while(count<=a)
	{
		scanf("%d",&b);
		c=c+b;
		if(b>0&&b<=50)
		{
			d++;
		}
		else if(b>=51&&b<=100)
		{
			e++;
		}
		else if(b>=101&&b<=150)
		{
			f++;
		}
		else if(b>=151&&b<=200)
		{
			g++;
		}
		else if(b>=201&&b<=300)
		{
			h++;
		}
		else
		{
			i++;
		}
	count++;
	}
	p=c/a;
	printf("%.2f\n%d %d %d %d %d %d",p,d,e,f,g,h,i);
	return 0;
}

