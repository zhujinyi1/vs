/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	double n, a, b,c,d,i;
	a = 2; b = 1; c = 0;
	printf("������n��");
	scanf_s("%lf", &n);
	for (i = 1; i <= n; i++) {
		c = c + a / b;
		d = b;
		b = a;
		a = a + d;
	}
	printf("%.2lf", c);
}