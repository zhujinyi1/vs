/*2004240223
������
12002��
*/
#include<stdio.h>
#include<math.h>
double fact(double n);
int main(void)
{
	double s,x;
	printf("������x��");
	scanf_s("%lf",&x);
	s = fact(x);
	printf("%.4lf", s);
}
double fact(double n) 
{
	double a, b, c, d,m;
	m = 1; c = 1; d = 1;
	for (a = 1; d >= fabs(0.00001); a++) {
		for (b = 1; b <= a ; b++) {
			c = c * a;
			d = pow(n, a ) / c;
			m = m + d;
		}
	}
	return m;
}