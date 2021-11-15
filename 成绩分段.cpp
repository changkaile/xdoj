/*标题	
成绩分级

类别
流程控制
	
时间限制	
1S

内存限制	
1000Kb

问题描述	
给出一个百分制的成绩，要求输出成绩等级'A','B','C','D','E'。90分以上为'A'，
80~89分为'B',70~79分为'C',60~69分为'D'，60分以下为'E'。

输入说明	
输入一个正整数m（0<=m<=100）

输出说明	
输出一个字符

输入样例	
59

输出样例	
E

	*/ 
#include"stdio.h"
int main()
{
	int m;
	scanf("%d",&m);
	if(m>=0&&m<=100)
	{
	
	m=m/10;
	switch(m)
	{
		case 10:
		case 9:
			printf("A");break;
		case 8:
			printf("B");break;
		case 7:
			printf("C");break;
		case 6:
			printf("D");break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		{
			printf("E");
			break;
		}
		default	: 
		{
			break;
		}
	}
	}
	return 0;
}
