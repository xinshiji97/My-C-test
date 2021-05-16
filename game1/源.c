#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//测试三子棋游戏

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
		printf("请选择开始");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}