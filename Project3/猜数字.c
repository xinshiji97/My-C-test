#include "stdio.h"
#include <stdlib.h>
#include <time.h>

void game()
{
	printf("������\n");
	int a;
	int num;

	a = rand() % 100;//����0-100�������
	while (1)
	{
		printf("������һ��0-100������:");
		scanf_s("%d", &num);
		//printf("%d",num);
		if (num > a)
		{
			printf("���ˣ�����һ��\n");
				//break;
		}
		else if(num < a)
		{
			printf("С�ˣ�����һ��\n");
			//break;
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}

}


int main()
{
	int input;
	srand((unsigned)time(NULL));
	do 
	{
		printf("***************************\n");
		printf("**  0.�뿪  ***  1.��ʼ  **\n");
		printf("***************************\n");
		printf("��ѡ��");
		scanf_s("%d", &input);

		switch (input)
		{
		case 0:
		{
			printf("\n�˳���Ϸ");
			break;
		}
		case 1:
		{
			printf("��ʼ��Ϸ");
			game();
			break;
		}
		default:
			printf("\nѡ�����");
			break;
		}

	} while (input);

	return 0;
}