/*2004240223
12002��
������
*/
#include<stdio.h>
int main()
{
	double x, y;
	printf("������x��");
	scanf_s("%lf", &x);
	if (x != 0)
	{
		y = 1 / x;
		printf("%.1lf", y);
	}
	else {
		y = 0;
		printf("%.1lf", y);
	}
	return 0;
}