#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//������������Ϸ

void menu()
{
	printf("********************************\n");
	printf("******  1.play    0.exit  ******\n");
	printf("********************************\n");
}


void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��ʼ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("start game\n");
			game();
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}