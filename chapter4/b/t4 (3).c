/*2004240223
������
12002��*/
#include<stdio.h>
int main() {
	int n,i,a,m;
	double e;
	e = 1.0; m = 1;
	printf("������n��");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (a = 1; a <= i; a++) {
			m = m * a;
		}
		e = e + 1.0 / m;
		m = 1;
	}
	printf("%.4lf", e);
	return 0;
}