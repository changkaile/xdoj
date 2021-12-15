#include <stdio.h>
 
int main() 
{
 int i, j, k, max, min, flag = 0;
 int a[4][5], line_max[4], column_min[5];
 for (i = 0; i < 4; i++) 
 {
  for (j = 0; j < 5; j++) 
  {
   scanf("%d", &a[i][j]);
  }
 }
 for (i = 0, k = 0; i < 4; i++, k++) 
 {
  max = a[i][0]; //将行首元素设置为最大初值
  for (j = 0; j < 5; j++) 
  {
   if (a[i][j] > max) 
   {
    max = a[i][j];
   }
  }
  line_max[k] = max; //将每行最大值填入line_max数组
 }
 for (j = 0, k = 0; j < 5; j++, k++) 
 {
  min = a[0][j]; //将列首元素设置为最小初值
  for (i = 0; i < 4; i++) 
  {
   if (a[i][j] < min) 
   {
    min = a[i][j];
   }
  }
  column_min[k] = min; //将每列最小值填入column_min数组
 }
 for (i = 0; i < 4; i++) //依次比较两数组中元素
 {
  for (j = 0; j < 5; j++) 
  {
   if (line_max[i] == column_min[j]) //相等即为鞍点
   {
    printf("%d %d %d", line_max[i], i + 1, j + 1);
    flag = 1;
    break;
   }
  }
 }
 if (flag == 0)
  printf("鞍点不存在");
 return 0;
}
