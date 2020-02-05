#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int id = 201806020917;
//	int id1 = 0;
//	printf("请输入学号并点击enter键\n");
//	scanf("%d", &id1);
//	if (id == id1)
//	{
//		printf("欢迎来到王者荣耀\n");
//	}
//	if (id != id1)
//	{
//		printf("输入错误请重新输入\n");
//		printf("你还有一次输入机会\n");
//		Sleep(5000);
//		system("cls");
//		scanf("%d", &id1);
//		if (id == id1)
//		{
//			printf("欢迎来到王者荣耀\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//			printf("输入机会已经结束，账号已被锁定\n");
//		}
//		
//	}
//	return 0;
//}
//void shu_id(int id1)
//{
//	int id = 201806020917;
//	printf("输入错误请重新输入：\n");
//	scanf("%d", &id1);
//	if (id == id1)
//		printf("欢迎来到王者荣耀\n");
//	else if (id != id1)
//		printf("输入错误请重新输入：\n");
//}
//int main()
//{
//	int id = 201806020917;
//	int id1 = 0;
//	printf("请输入学号并点击enter键\n");
//	scanf("%d", id1);
//	if (id == id1)
//		printf("欢迎来到王者荣耀\n");
//	else
//		shu_id(id1);
//	return 0;
//}
//用户三次登录王者荣耀；
//int main()
//{
//	int i = 0;
//	char id1[20] = { 0 };
//	for (i = 3; i > 0; i--)
//	{
//		printf("请输入学号\n");
//		scanf("%s", id1);
//		if (0 == strcmp(id1, "201806020917"))
//		{
//			break;
//		}
//		else
//		{
//			int chance = i - 1;
//			printf("输入错误请重新输入：\n");
//			printf("你还有%d次输入机会\n",chance);
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	if (i > 0)
//		printf("欢迎来到王者荣耀\n");
//	else
//		printf("输入机会已经用完，账号已被锁定\n");
//	return 0;
//}
//n的 阶乘；
//int main()
//{
//	int i = 0, n;
//	long long product = 1;
//	printf("请输入数字 N的大小并点击enter键\n");
//	scanf("%d", &n);
//	for (i = n; i >=1; i--)
//	{
//		product *= i;
//	}
//	printf("product=%lld\n", product);
//	return 0;
//}
//计算1！+2！+3！+......+10!;(优化前)；
//int main()
//{
//	int i = 0, n = 0;
//	long long product = 1, sum = 0;
//	for (n = 1; n <= 10; n++)
//	{ 
//		for (i = n; i >= 1; i--)
//		{
//			product *= i;
//		}
//		printf("product=%lld\n", product);
//		sum += product;
//		product = 1;	
//	}
//	printf("sum=%lld\n", sum);
//	return 0;
//}
//计算1！+2！+3！+......+10!;(优化后)；
//int main()
//{
//	int n;
//	long long product = 1, sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		//	product *= 1;
//			product *= n;
//			sum += product;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//二分查找法(优化前）；
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12 };
//	int key = 7, left = 0, sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("找到了，%d\n", left);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//二分查找法（优化后）；
//int erfenchazhao_shuzi(int arr[], int key, int sz)
//{
//	int left = 0, right = sz - 1;
//	int mid = left + (right - left) / 2;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 5, ret;
//	ret = erfenchazhao_shuzi(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("找到了，%d\n", ret);
//	return 0;
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("***************************************\n");
//	printf("*********1.     开始游戏     **********\n");
//	printf("*********0.     退出游戏     **********\n");
//	printf("***************************************\n");
//	printf("***************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//			printf("猜大了\n");
//		else
//			printf("猜小了\n");
//	}
//}
//int main()
//{
//	int input;
//	srand ((unsigned)time(NULL)) ;
//	do
//	{
//		menu();
//		printf("请选择>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: game();
//			break;
//		case 0:
//			break;
//		default: printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	printf("\n");
//	return 0;
//}
//猜数字游戏；
//void menu()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("********  1、     进入游戏        **********\n");
//	printf("********  0、     退出游戏        **********\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入你的选择：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:
//			break;
//		default:printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
