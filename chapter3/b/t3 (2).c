/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int n,s,i,x,v,y;
	printf("������ѧ��������");
	scanf_s("%d", &n);
	x = 0; y = 0;
	for (i = 1; i <= n; i++) {
		printf("������ѧ���ɼ���\n");
		scanf_s("%d", &s);
		if (s >= 60) {
			printf("����\n"); x = x + 1; y = y + s;
		}
		else {
			y = y + s;
			printf("������\n");
		}
	}
	v = y / n;
	printf("��������=%d", x);
	printf("ƽ���ɼ�=%d",v);
	return 0;
}