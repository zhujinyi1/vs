/*2004240223
12002��
������
*/
#include<stdio.h>
int main()
{
	double x, y;
	printf("���������õ�����");
	scanf_s("%lf", &x);
	if (x <= 50) {
		y = 0.53 * x;
		printf("�û�֧����ѣ�%.2lf", y);
	}
	else {
		y = 0.53 * 50 + 0.58 * (x - 50);
		printf("�û�֧����ѣ�%.2lf", y);
	}
	return 0;
}