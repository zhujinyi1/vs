/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int n, a,i,b,c,t;
	printf("�����������");
	scanf("%d", &n);
	printf("������������");
	scanf("%d", &b);
	c = b;
	for (i = 2; i <= n; i++)
	{
		scanf_s("%d", &b);
		if (b < c) {
			t = b; b = c; c = t;
		}
	}
	printf("��Сֵ=%d", c);
	return 0;

}