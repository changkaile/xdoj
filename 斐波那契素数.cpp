/*标题	
斐波纳契数列

类别
函数与递归
	
时间限制	
2S

内存限制	
256Kb

问题描述	
已知一个斐波纳契数列中的数字依次为1, 1, 2, 3, 5, 8, 13, 21, 34, 55 … 。请判断该数列中第n个数字
（n从1开始计数）是不是素数。

输入说明	
输入一个整数n（1<n<=40）。

输出说明	
判断斐波纳契数列中的第n个数字是不是素数，如果是输出yes，否则输出该数字。

输入样例
样例1输入	
6
样例2输入
4

输出样例	
样例1输出
8
样例2输出
yes
*/ 
#include"stdio.h"
int isprim(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	
	}
	return 1;
}
int fib(int n)
{
	if(n==1||n==2)
	{
		return 1;
		
	}
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int i;
	int a[40];
	for(i=0;i<=39 ;i++)
	{
		a[i]=fib(i+1);
	}
	int n;
	scanf("%d",&n);
	if(isprim(a[n-1]))
	{
		printf("yes");
	}
	else
		printf("%d",a[n-1]);
	
	return 0;
}
