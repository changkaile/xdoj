#include<stdio.h>

int main() {
    int i, j, m, n, a[100][100];
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)                   //���������
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        int count = 0, max = 0, location = 0, sign = 0;    //ע����Щ��ʼ����λ��
        for (j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                count++;
                sign = 1;         //��Ǳ�������1����sign = 1
                if (j + 1 < n)        //���ڲ������һ��Ԫ��
                {
                    if (a[i][j + 1] == 0 && count > max)     //��һ��Ϊ0����Ƚ��Ƿ�Ϊ�
                    {
                        max = count;
                        location = j;
                        count = 0;              //��Ϊ1�����������ˣ�����count�ظ�ֵΪ0
                    }
                } else {     //���������һ��Ԫ��
                    if (count > max)     //��Ƚ��Ƿ�Ϊ�
                    {
                        max = count;
                        location = j;
                        count = 0;              //��Ϊ1�����������ˣ�����count�ظ�ֵΪ0
                    }
                }
            }
        }
        if (sign) {
            printf("%d %d\n", location - max + 1, location);
        } else
            puts("-1 -1");
    }
    return 0;
}


