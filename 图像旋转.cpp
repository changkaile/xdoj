/*输入说明	
输入的第一行包含两个整数n和m，分别表示图像矩阵的行数和列数。1 ≤ n, m ≤ 100。
接下来n行，每行包含m个非负整数，表示输入的图像，整数之间用空格分隔。

输出说明	
输出m行，每行n个整数，表示顺时针旋转90度之后的矩阵，元素之间用空格分隔。

输入样例	
2 3
1 5 3
3 2 4

输出样例	
3 1
2 5
4 3	*/
#include"stdio.h"
int main()
{
	int m,n,i=0,j=0;
	scanf("%d %d",&m,&n);
	int arr[m][n],b[n][m];
	for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
	 	{
	 		scanf("%d",&arr[i][j]);
		}
	}
	int k=0,t=0;
	for(t=0,j=0;t<m,j<=n-1;t++,j++)
	{
	for(k=0,i=m-1;k<n,i>=0;i--,k++)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	}

	return 0;
}
