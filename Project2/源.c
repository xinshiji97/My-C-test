#define CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
#include <windows.h>
#include "stdlib.h"

int main()
{
	int i = 0;
	char password[8] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�Ƚ��ַ���
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��������������Ժ�����\n");
	}
	return 0;
}



















//int main()
//{
//	char arr1[] = "xinshiji is you father!";
//	char arr2[] = "#######################";
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	//int right = sz - 2;//\0���ַ����Ľ���λ����-2
//	int right = strlen(arr1) - 1;
//	for (; left <= right; left++, right--)
//	{
//		system("cls");//ִ��ϵͳ��������Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//	}
//	return 0;
//}



//int main()//���ַ�
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k;
//	printf("please entire a number you want:");
//	scanf_s("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//\0���ַ����Ľ���λ������û��
//	int lift = 0;
//	int right = sz - 1;
//	int mid = (lift + right) / 2;
//	while (lift<=right)
//	{
//		mid = (lift + right) / 2;
//		if (k > arr[mid])
//		{
//			lift = mid+1;//����Ҫ+1
//			continue;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;//����Ҫ-1
//			continue;
//		}
//	    else
//	    {
//		     printf("arr[%d]=%d",mid,k);
//		     break;
//	    }
//	}
//	if (lift > right)
//	{
//		printf("CAN NOT FIND!!!!");
//	}
//	return 0;
//}






















//int main()
//{
//	int sum = 1, i,add=0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = sum * i;
//		add = add + sum;
//	}
//	printf("%d\n", add);
//	return 0;
//}














//int main()//�׳�
//{
//	int sum = 1, i,n;
//	printf("please entire a number:");
//	scanf_s ("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d! = %d\n", n,sum);
//	return 0;
//}