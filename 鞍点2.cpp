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
  max = a[i][0]; //������Ԫ������Ϊ����ֵ
  for (j = 0; j < 5; j++) 
  {
   if (a[i][j] > max) 
   {
    max = a[i][j];
   }
  }
  line_max[k] = max; //��ÿ�����ֵ����line_max����
 }
 for (j = 0, k = 0; j < 5; j++, k++) 
 {
  min = a[0][j]; //������Ԫ������Ϊ��С��ֵ
  for (i = 0; i < 4; i++) 
  {
   if (a[i][j] < min) 
   {
    min = a[i][j];
   }
  }
  column_min[k] = min; //��ÿ����Сֵ����column_min����
 }
 for (i = 0; i < 4; i++) //���αȽ���������Ԫ��
 {
  for (j = 0; j < 5; j++) 
  {
   if (line_max[i] == column_min[j]) //��ȼ�Ϊ����
   {
    printf("%d %d %d", line_max[i], i + 1, j + 1);
    flag = 1;
    break;
   }
  }
 }
 if (flag == 0)
  printf("���㲻����");
 return 0;
}
