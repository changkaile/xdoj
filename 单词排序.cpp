#include"stdio.h"
#include"string.h"
void wd_sort(char (*p)[20],int n)
{
	int i,j;
	char* t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(*(p+j),*(p+j+1))>0)
			{
				strcpy(t,*(p+j));
				strcpy(*(p+j),*(p+j+1));
				strcpy(*(p+j+1),t);
			}
		}
	}
}
int main()
{
	int i=0,n;
	scanf("%d",&n);
	char a[n][20];
	char* p;
	p=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]); 
	}
	wd_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
