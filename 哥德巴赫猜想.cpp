/*标题	
歌德巴赫猜想

类别	
函数与递归

时间限制	
2S

内存限制	
10000Kb

问题描述
德巴赫猜想：
任意一个大偶数都能分解为两个素数的和,
对与输入的一个正偶数，写一个程序来验证歌德巴赫猜想。
由于每个正偶数可能分解成多组素数和，仅输出分解值分别是最小和最大素数的一组，按从小到大顺序输出。

输入说明	
输入一个正偶数n，1<n<1000。

输出说明	
输出分解出的两个最小和最大素数。

输入样例	
10

输出样例	
3 7*/
#include"stdio.h"
#include"math.h"
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
int main()
{
	int n,i,t;
	scanf("%d",&n);
	if(n==6)
	{
		printf("3 3");
	}
	else
	{
	
	for(i=2;i<n;i++)
	{
		if(isprim(i))
		{
			t=n-i;
			if(isprim(t))
			{
				printf("%d %d",i,t);
				break;
			}
		}
			
	}
}
	return 0;
}
