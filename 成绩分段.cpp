/*����	
�ɼ��ּ�

���
���̿���
	
ʱ������	
1S

�ڴ�����	
1000Kb

��������	
����һ���ٷ��Ƶĳɼ���Ҫ������ɼ��ȼ�'A','B','C','D','E'��90������Ϊ'A'��
80~89��Ϊ'B',70~79��Ϊ'C',60~69��Ϊ'D'��60������Ϊ'E'��

����˵��	
����һ��������m��0<=m<=100��

���˵��	
���һ���ַ�

��������	
59

�������	
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
