/*2004240223
������
12002��*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	double y;
	y = 0; 
	printf("������������n��");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		y = y + sqrt(i,3);
	}
	printf("%.2lf", y);
	return 0;
}