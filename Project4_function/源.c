#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "add.h"

//int my_strlen(char* str)//���ַ�������
//{
//	int count = 0;
//	while (*str != '\0')//��һ���ַ�ʱҪ��'',��""ʱ����
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

int my_strlen(char* str)//���ַ�������
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
//	printf("%d", printf("%d", printf("%d", 43)));//�����4321��printf�����ķ���ֵthe total number of characters written is returned
//	return 0;
//}


//int is_prime(int x)//�ж�����
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
//		printf("������һ�����֣�");
//		scanf_s("%d", &num);
//		if (is_prime(num) == 0)
//			printf("%d��������\n",num);
//		else
//			printf("%d������\n",num);
//	}
//	return 0;
//}
























////��ʵ�δ����βε�ʱ��
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���ı�ʵ��
//
//void Swap1(int x, int y)//���ܽ���������ֵ
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* x,int* y)//��Ҫ��ָ������������
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
