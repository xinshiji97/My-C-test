#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };//字符串
//	printf("%d\n", strlen(arr));//随机数
//	printf("%d\n", sizeof(arr));//3
//}
// 
// 
// 
//void bubble_sort(int arr[])
//{
//	int tmp,i,j;
//	int sz = sizeof(arr) / sizeof(arr[0]);//错的
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


void bubble_sort(int arr[],int sz)
{
	int tmp,i,j;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		for (j = 0; j < sz-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void bubble_sort_1(int* arr,int sz)//
{
	int tmp, i, j;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (*(arr+j) > *(arr+(j+1)))//指针加1 不是加一个字节 而是加一个存储单元，这个存储单元的大小由指针的类型决定
			{
				tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int a[] = { 0,5,6,9,7,5,9,3,4,755,9,66,3,777,56 };
	int sz = sizeof(a) / sizeof(a[0]);
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是arr的首元素地址&a[0]
	//int i;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%p\n", &a[i]);
	//}
	//int i;
	bubble_sort_1(&a,sz);//&数组名，数组名代表整个数组，&数组名取出得是整个数组的地址
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	return 0;
}