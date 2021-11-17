/*标题
阶乘运算

描述
编写P(m,n)=m!/n!/(m-n)!，(m>n)。求出P(8,6)和P(5,2)的值。

时间限制
1	

内存限制
10000	

类别
1

输入说明
输入两个整数（m>n），如8 6	

输出说明
输出保留2位小数	

输入样例
8 6

输出样例
28.00

提示
采用for循环结构，数据类型为单精度浮点型，输出保留两位小数，格式%.2f。
编写阶乘计算函数Mul()，主函数调用
*/
#include"stdio.h"
int jc(int n)
{
	if(n!=1)
	    return n*jc(n-1);
    else
    	return 1;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	float p;
	if(a<b)
	{
		int t;
		t=b;
		b=a;
		a=t;
	 } 
	p=jc(a)/jc(b)/jc(a-b);
	printf("%.2f",p);
	return 0;
}
 
