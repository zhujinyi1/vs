/*2004240223
12002��
������
*/
#include<stdio.h>
int main()
{
	int i, n;
	double p;
	printf("Enter n:");
	scanf_s("%d", &n);
	p = 1;
	for (i = 1; i <= n; i++) {
		p = p * i;
	}
	printf("p=%.0f\n", p);
	return 0;
}