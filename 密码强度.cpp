/*1.	基础分：空密码(密码长度为零)0分，非空密码1分
2.	加分项1：密码长度超过8位，+1分
3.	加分项2：密码包含两类不同字符+1分，包含三类不同字符+2分，包含四类不同字符+3分
按照此规则计算的密码强度为0~5。请你设计一个程序计算给出的密码的强度。

输入说明	
输入为一个密码字符串，字符串长度不超过50个字符。

输出说明	
输出一个整数表示该密码的强度。

输入样例	
输入样例1
abcd
输入样例2
ab123

输出样例	
样例1输出：
1
样例2输出
2*/
#include"stdio.h"
#include"string.h"
int main()
{
	int i,grade=0,n=0;
	int a=0,b=0,c=0,d=0;
	char arr[50];
	gets(arr);
	int m=strlen(arr);
	if(m==0)
	{
		grade=0;
	}
	if(m>0&&m<=8)
	{
		grade=1;
	}
	if(m>8)
	{
		grade=2;
	}
	for(i=0;i<m;i++)
	{
		if(arr[i]>='0'&&arr[i]<='9'&&a==0)
		{
			n++;
			a=1;
		}
		if(arr[i]>='a'&&arr[i]<='z'&&b==0)
		{
			n++;
			b=1;
		}
		if(arr[i]>='A'&&arr[i]<'Z'&&c==0)
		{
			n++;
			c=1;
		}
		if(arr[i]<'0'||(arr[i]>'9'&&arr[i]<'A')||(arr[i]>'Z'&&arr[i]<'a')||arr[i]>'z')
		{
			if(d==0)
			{
				n++;
				d=1;
			}
		}
	}
	if(n==2)
	{
		grade++;
	}
	if(n==3)
	{
		grade+=2;
	}
	if(n==4)
	{
		grade+=3;
	}	
	printf("%d",grade);
	return 0;
}
