#include<stdio.h>















int i;//ȫ�ֱ�������ʼ��Ĭ��Ϊ0
int main()
{

	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	char j=(char)i;
	printf("%d\n", i);
	return 0;
}














//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//





//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}




//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d", b);
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ������ܻ����
//	//a = a + b;
//	//b=a - b;
//	//a = a - b;
//	printf("a=%d,b=%d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}