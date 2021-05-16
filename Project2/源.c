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
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//比较字符串
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码错误，请稍后重试\n");
	}
	return 0;
}



















//int main()
//{
//	char arr1[] = "xinshiji is you father!";
//	char arr2[] = "#######################";
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	//int right = sz - 2;//\0是字符串的结束位所以-2
//	int right = strlen(arr1) - 1;
//	for (; left <= right; left++, right--)
//	{
//		system("cls");//执行系统命令，清空屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//	}
//	return 0;
//}



//int main()//二分法
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k;
//	printf("please entire a number you want:");
//	scanf_s("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//\0是字符串的结束位，数组没有
//	int lift = 0;
//	int right = sz - 1;
//	int mid = (lift + right) / 2;
//	while (lift<=right)
//	{
//		mid = (lift + right) / 2;
//		if (k > arr[mid])
//		{
//			lift = mid+1;//必须要+1
//			continue;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;//必须要-1
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














//int main()//阶乘
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