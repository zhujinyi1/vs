/*2004240223
������
12002��*/
#include<stdio.h>
double fact(int n);
int main(void)
{
	int i, n;
	double result;
	printf("Enter n:");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++) {
		result = fact(i);
		printf("%d!=%.0f\n", i, result);
	}
		return 0;
	}
	double fact(int n)
	{
		int i;
		double product;
		product = 1;
		for (i = 1; i <= n; i++) {
			product = product * i;
		}
		return product;
	}
