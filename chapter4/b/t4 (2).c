/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int x, y, n,i,a;
	x = 50; n = 5; a = 0;
	for (i = 1; i <= n; i++) {
		printf("�������������֣�\n");
		scanf_s("%d", &y);
		if (y < 0) {
			printf("Game over!");
			break;
		}
		if (x == y) {
			a++;
			break;
		}
		else {
			if (x > y) {
				printf("���С��\n");
				a++;
			}
			else {
				printf("��´���\n");
				a++;
			}
		}
	}
	if (a==1) 
		printf("Bingo!");
	if (a>1&&a<= 3)
		printf("Lucky you!");
	if (a>3&&a<= n)
	{
		if (x == y) {
			printf("Good Guess!");
		}
		else {
			printf("Game Over!");
		}
	}
	return 0;
}