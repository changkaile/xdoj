#include"stdio.h"
#include"string.h"
void connect(char a[],char b[],char c[])
{
	int i,j;

	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		
		c[i+j]=b[j];
	}
	c[i+j]='\0';
}
int main()
{
	char m[100],n[100],t[200];
	gets(m);
	gets(n);
	connect(m,n,t);
	printf("%s",t);
	return 0;
}
