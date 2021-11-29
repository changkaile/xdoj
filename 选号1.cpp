#include"stdio.h"
int sum(int n)
{
	int sum=0;
	int a; 
	while(n>0)
	{
		a=n%10;
		n=n/10;
		sum+=a; 
	}
	return sum;
 } 
 int main()
 {
 	int a;
 	int i,b;
 	int max=0;
 	scanf("%d\n",&a);
 	int m[a],n[a];
 	for(i=0;i<a;i++)
 	{
 		scanf("%d",&m[i]);
	}
	for(i=0;i<a;i++)
	{
		n[i]=sum(m[i]);
	}

	
 	 	for(i=0;i<a;i++)
	{
		int j;
	 for(j=0;j<a;j++)
	 {
	 	if(n[j+1]==n[j]&&m[j+1]>m[j])
	 	{
	 		m[j]=m[j+1];
	 		
		 }
		 }
	 }
 	 

	for(i=0;i<a;i++)
	{
		
		if(n[i]>max)
		{
			max=n[i];
			b=m[i];
		}
		
	}
	printf("%d",b);


 	return 0;
 }
