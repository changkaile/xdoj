/*����	
�������

���
������ݹ�

ʱ������	
1S

�ڴ�����	
1000Kb

��������	
��һ�������У�
2/1,3/2,5/3,8/5,13/8,21/13,......An/Bn
A1=2��A2=3��An=An-1+An-2��
B1=1��B2=2��Bn=Bn-1+Bn-2��
���������е�ǰn(2<=n<=30)��֮�͡�

����˵��	
һ������n

���˵��	
���һ��ʵ����ʾ����ǰn��֮�ͣ��������2λС�����������룩

��������	
2
�������	
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
