#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };//�ַ���
//	printf("%d\n", strlen(arr));//�����
//	printf("%d\n", sizeof(arr));//3
//}
// 
// 
// 
//void bubble_sort(int arr[])
//{
//	int tmp,i,j;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���
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
			if (*(arr+j) > *(arr+(j+1)))//ָ���1 ���Ǽ�һ���ֽ� ���Ǽ�һ���洢��Ԫ������洢��Ԫ�Ĵ�С��ָ������;���
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
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ����arr����Ԫ�ص�ַ&a[0]
	//int i;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%p\n", &a[i]);
	//}
	//int i;
	bubble_sort_1(&a,sz);//&�������������������������飬&������ȡ��������������ĵ�ַ
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	return 0;
}