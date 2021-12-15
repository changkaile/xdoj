#include"stdio.h"
#include"string.h"
void count(char *str,char* word)
{
	int num=0,i=0,j=0,t=0,flag=0,len=0;
	int m=strlen(word);
	int n=strlen(str);
	while(str[i]!=' ')
	{
		len++;
		i++;
	}
	for(i=0;i<m;i++)
	{
		if(str[i]==word[i]&&len==m)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}	
		if(flag)
		{
			num=1;
		}
	}
	flag=0,len=0;
	for(i=0;i<n;i++)
	{
		if(str[i]==' ')
		{	
		int k=0;
		while(str[i+k+1]!=' '&&str[i+k+1]!='\0')
		{
			len++;
			k++;
		}
			for(j=i+1,t=0;j<i+1+m,t<m;j++,t++)
			{
				if(str[j]==word[t]&&len==m)
				{
					flag=1;
				}
				else
				{
					flag=0;
				}
			}
			if(flag)
			{
				num++;
			}
		}
		len=0;
	}
	printf("%s %d",word,num);
}
int main()
{
	char a[100];
	char b[20];
	gets(a);
	gets(b);
	count(a,b);
	return 0;
} 
