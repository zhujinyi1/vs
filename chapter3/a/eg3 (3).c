/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int x, i, z;
	double g, t;
	printf("������ѧ������z:");
	scanf_s("%d", &z);
	x = 0; t = 0;
	for (i = 1; i <= z; i++) {
		printf("������ɼ�g��");
		scanf_s("%lf", &g);
		t = t + g;
		if (g < 60) {
			x++;
		}
	}
	printf("ƽ����=%.2f\n", t / z);
	printf("����������=%d\n", x);
	return 0;

}