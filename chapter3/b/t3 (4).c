/*2004240223
������
12002��*/
#include<stdio.h>
int main()
{
	int i, choice;
	double price;
	for (i = 1; i <= 5; i++) {
		printf("1.��ѯƻ���۸�\n");
		printf("2.��ѯ��۸�\n");
		printf("3.��ѯ���Ӽ۸�\n");
		printf("4.��ѯ���Ѽ۸�\n");
		printf("5,�˳�\n");
		printf("Enter choice:");
		scanf_s("%d", &choice);
		if (choice == 0)
			break;
		switch (choice) {
		case 1:price = 3.0; break;
		case 2:price = 2.5; break;
		case 3:price = 4.1; break;
		case 4:price = 10.2; break;
		default:price = 0.0; break;
		}
		printf("price=%.1lf\n", price);
	}
	printf("Thanks\n");
	return 0;

}