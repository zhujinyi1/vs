/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	double x, y, z;
	printf("���٣�");
	scanf_s("%lf", &x);
	printf("���٣�");
	scanf_s("%lf", &y);
	if (y <= 1.1*x) {
		printf("����");
	}
	else {
		if (y <= 1.5 * x) {
			printf("����200");
		}
		else {
			printf("������ʻ֤");
		}
	}
	return 0;
}