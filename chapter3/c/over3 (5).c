/*2004240223
������
12002��*/
#include<stdio.h>
#include<math.h>
int main(void) {
	double x1, y1,x2, y2, x3, y3,a,b,c,m,n,p,d,s,e,area;
	printf("���������꣺");
	scanf_s("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	m = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	a = sqrt(m);
	n = pow(x1 - x3, 2) + pow(y1 - y3, 2);
	b = sqrt(n);
	p = pow(x2 - x3, 2) + pow(y2 - y3, 2);
	c = sqrt(p);
	if (a + b > c || a + c > b || b + c > a) {
		printf("���Թ���������\n");
	}
	else {
		printf("impossible");
	}
	d = a + b + c;
	s = d / 2;
	e = s * (s - a) * (s - b) * (s - c);
	area = sqrt(e);
	printf("�ܳ�=%.2lf,���=%.2lf", d, area);
	return 0;


}