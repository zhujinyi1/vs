/*2004240223
������
12002��*/
#include<stdio.h>
int main(void) {
	int n,i,m;
	printf("����ѧ��������");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("����ѧ���ɼ���");
		scanf_s("%d", &m);
		if (m>= 90) {
			printf("A\n");
		}
		else if (m >= 80) {
			printf("B\n");
		}
		else if (m>= 70) {
			printf("C\n");
		}
		else if (m >= 60) {
			printf("D\n");
		}
		else {
			printf("E\n");
		}
	}
	return 0;
}