#include <stdio.h>
#define MAX 100
extern int add(int, int);
//int main()
//{
//	int i = 1,j=0;
//	printf("1-100之间的奇数有：\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			if (i < 10)
//				printf("0");
//			printf("%d ", i);
//			j++;
//			if (j % 5 == 0)
//				printf("\n");
//		}
//		else
//			continue;
//	}
//	return 0;
//}











//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//printf("%p\n",&a);
//	//printf("%p\n", p);
//	//printf("%p\n", &p);
//	//*p = 20;
//	//printf("%d\n", a);
//	//char ch = 'w';
//	//char* p = &ch;
//	//printf("%c\n", ch);
//	//*p = 'a';
//	//printf("%c\n", ch);
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	//return 0;
////}


int main()
{
	int a = 10, b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}














//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


















//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}