/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int m, n, i, a,b,c,d;
	printf("�����뷶Χ��");
	scanf("%d%d", &m, &n);
	d = 0; c = 0;
	for (i = m; i <= n; i++)
	{
		a = i;
		for (b = 2; b <= a / 2; b++) {
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > a / 2 && b != 1&&a!=1)
		{
			c++; d = d + a;
		}
	}
	printf("��������=%d��������=%d", c, d);
	return  0;
}