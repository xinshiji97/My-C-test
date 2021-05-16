#include "stdio.h"
#include <stdlib.h>
#include <time.h>

void game()
{
	printf("猜数字\n");
	int a;
	int num;

	a = rand() % 100;//生成0-100的随机数
	while (1)
	{
		printf("请输入一个0-100的数字:");
		scanf_s("%d", &num);
		//printf("%d",num);
		if (num > a)
		{
			printf("大了，再试一次\n");
				//break;
		}
		else if(num < a)
		{
			printf("小了，再试一次\n");
			//break;
		}
		else
		{
			printf("猜对了\n");
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
		printf("**  0.离开  ***  1.开始  **\n");
		printf("***************************\n");
		printf("请选择：");
		scanf_s("%d", &input);

		switch (input)
		{
		case 0:
		{
			printf("\n退出游戏");
			break;
		}
		case 1:
		{
			printf("开始游戏");
			game();
			break;
		}
		default:
			printf("\n选择错误");
			break;
		}

	} while (input);

	return 0;
}