/*2004240223
12002��
������
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double x, y;
	printf("������x��");
	scanf_s("%lf", &x);
	if (x < 0) {
		y = (x + 1) * (x + 1) + 2 * x + 1 / x;
		printf("%.2lf", y);
	}
	else {
		y = sqrt(x);
		printf("%.2lf", y);
	}
	return 0;
}