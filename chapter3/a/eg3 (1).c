/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int x,y;
	x = 38;
	printf("��������µ���:");
	scanf_s("%d", &y);
	if (x == y) {
		printf("Ok!You are right!\n");
	}
	else{
		if (x >y) {
			printf("���С��!");
		}
		else {
			printf("��´���!");
		}
	}
	return 0;
}