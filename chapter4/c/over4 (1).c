/*2004240223
������
12002��
*/
#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	c = 0;
	printf("������������������");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("���������֣�");
		scanf_s("%d", &a);
		if (a <= 0) {
			break;
		}
		if (a % 2 == 1) {
			c = c + a;
		}
	}
	printf("%d", c);
	return 0;
}