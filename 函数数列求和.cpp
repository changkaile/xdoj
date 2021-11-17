/*标题	
数列求和

类别
函数与递归

时间限制	
1S

内存限制	
1000Kb

问题描述	
有一分数序列：
2/1,3/2,5/3,8/5,13/8,21/13,......An/Bn
A1=2，A2=3，An=An-1+An-2；
B1=1，B2=2，Bn=Bn-1+Bn-2。
求出这个数列的前n(2<=n<=30)项之和。

输入说明	
一个整数n

输出说明	
输出一个实数表示数列前n项之和，结果保留2位小数（四舍五入）

输入样例	
2
输出样例	
3.50*/ 
#include"stdio.h"
float f1(int n)
{
	if(n==1)
	    return 2;
	if(n==2)
		return 3;
	else
		return f1(n-1)+f1(n-2);
}
float f2(int n)
{
	if(n==1)
	    return 1;
	if(n==2)
		return 2;
	else
		return f2(n-1)+f2(n-2);
}
int main()
{
	int n;
	int i;
	float p,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=f1(i)/f2(i);
		sum+=p;
	}
	printf("%.2f",sum);
	return 0;
}
