/*标题
成绩分级

描述
给出一个百分制的成绩，要求输出成绩等级'A','B','C','D','E'。90分以上为'A'，80~89分为'B'，70~79分为'C'，60~69分为'D'，60分以下为'E'。

时间限制
1	

内存限制
10000	

类别
1

输入说明
输入一个百分制成绩，浮点型，如78.5。

输出说明
输出成绩和等级，成绩保留两位小数，如78.50 C	

输入样例
78.5

输出样例
78.50 C	

提示
格式输出%.2f %c

*/
#include"stdio.h"
int main()
{
	float a;
	scanf("%f",&a); 
	if(a>=90&&a<=100)
	{
		printf("%.2f A",a);
	}
	else if(a>=80)
	{
	printf("%.2f B",a);	
	}
	else if(a>=70)
	{
		printf("%.2f C",a);
	}
	else if(a>=60)
	{
		printf("%.2f D",a);
	}
	else if(a>=0)
	{
		printf("%.2f E",a);
	}
	return 0;
}
