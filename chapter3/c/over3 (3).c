/*2004240223
������
12002��*/
#include<stdio.h>
int main(void) 
{
	int x, y,z,n,a,b;
	b = 0;
	printf("���̣�");
	scanf_s("%d", &x);
	if (x <= 3) {
		z = 10;
	}
	else if (x > 3 && x <= 10) {
		z = 10 + 2*(x - 3);
	}
	else {
		z = 24 + 3 * (x-10);
	}
	printf("��·�輰�˿�Ҫ��ͣ��ʱ��:");
	scanf_s("%d", &n);
	if (n< 5) {
		printf("\n");
	}
	else {
		for (a = 5; a <= n; a = a + 5) {
			b = b + 2;
		}
	}
	y = z + b;
	printf("����=%d", y);
	return 0;
}