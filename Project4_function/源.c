#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "add.h"

//int my_strlen(char* str)//求字符串长度
//{
//	int count = 0;
//	while (*str != '\0')//当一个字符时要用'',用""时报错
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

int my_strlen(char* str)//求字符串长度
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}





int main()
{
	char arr[] = "abcdef";
	int len;
	len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//int main() 
//{
//	printf("%d", printf("%d", printf("%d", 43)));//输出是4321，printf函数的返回值the total number of characters written is returned
//	return 0;
//}


//int is_prime(int x)//判断素数
//{
//	int i;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int num;
//	while (1)
//	{
//		printf("请输入一个数字：");
//		scanf_s("%d", &num);
//		if (is_prime(num) == 0)
//			printf("%d不是素数\n",num);
//		else
//			printf("%d是素数\n",num);
//	}
//	return 0;
//}
























////当实参传给形参的时候
////形参其实是实参的一份临时拷贝
////对形参的修改不会改变实参
//
//void Swap1(int x, int y)//不能交换两个数值
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* x,int* y)//需要用指针来交换数据
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d  b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
