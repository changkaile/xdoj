/*若一个矩阵中的某元素在其所在行最小而在其所在列最大，则该元素为矩阵的一个马鞍点。
请写一个程序，找出给定矩阵的马鞍点。

输入说明	
输入数据第一行只有两个整数m和n（0<m<100,0<n<100），分别表示矩阵的行数和列数；
接下来的m行、每行n个整数表示矩阵元素（矩阵中的元素互不相同），整数之间以空格间隔。

输出说明	
在一行上输出马鞍点的行号、列号（行号和列号从0开始计数）及元素的值（用一个空格分隔），之后换行；
若不存在马鞍点，则输出一个字符串“no”后换行。

输入样例	
4  3
11    13    121    
407   72    88
23    58    1 
134   30    62

输出样例	
1 1 72*/ 
#include"stdio.h"
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n],b,c,k;
	int i,j; 
	int min,max;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<m;i++)
	{
		 min=a[i][0];
		int b=0,k=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				b=j;
			}
		}
	 max=a[0][b];
		for(k=0;k<m;k++)
		{
			if(max<a[k][b])
			{
				max=a[k][b];
				c=k;
			}
		}
		if(max==min)
		{
			printf("%d %d %d\n",c,b,a[c][b]);
			break;
		}
	}
		if(max!=min)
		{
			printf("no");
		}
	
	
	return 0;
}
