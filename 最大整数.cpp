/*����	
Ѱ���������

���	
���̿���

ʱ������	
1S

�ڴ�����	
1000Kb

��������	
�Ӽ��������ĸ��������ҳ����е����ֵ�����������

����˵��	
����4���������ÿո�ָ�

���˵��	
���ֵ����һ������

��������	
25 99 -46 0

�������	
99
	*/
#include"stdio.h"
int main()
{
	int a,b,c,d;
	int max;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	if(max<d)
	{
		max=d;
	}
	printf("%d",max);
	return 0;
 } 
