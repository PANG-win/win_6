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
//	printf("������ѧ�Ų����enter��\n");
//	scanf("%d", &id1);
//	if (id == id1)
//	{
//		printf("��ӭ����������ҫ\n");
//	}
//	if (id != id1)
//	{
//		printf("�����������������\n");
//		printf("�㻹��һ���������\n");
//		Sleep(5000);
//		system("cls");
//		scanf("%d", &id1);
//		if (id == id1)
//		{
//			printf("��ӭ����������ҫ\n");
//		}
//		else
//		{
//			printf("�������\n");
//			printf("��������Ѿ��������˺��ѱ�����\n");
//		}
//		
//	}
//	return 0;
//}
//void shu_id(int id1)
//{
//	int id = 201806020917;
//	printf("����������������룺\n");
//	scanf("%d", &id1);
//	if (id == id1)
//		printf("��ӭ����������ҫ\n");
//	else if (id != id1)
//		printf("����������������룺\n");
//}
//int main()
//{
//	int id = 201806020917;
//	int id1 = 0;
//	printf("������ѧ�Ų����enter��\n");
//	scanf("%d", id1);
//	if (id == id1)
//		printf("��ӭ����������ҫ\n");
//	else
//		shu_id(id1);
//	return 0;
//}
//�û����ε�¼������ҫ��
//int main()
//{
//	int i = 0;
//	char id1[20] = { 0 };
//	for (i = 3; i > 0; i--)
//	{
//		printf("������ѧ��\n");
//		scanf("%s", id1);
//		if (0 == strcmp(id1, "201806020917"))
//		{
//			break;
//		}
//		else
//		{
//			int chance = i - 1;
//			printf("����������������룺\n");
//			printf("�㻹��%d���������\n",chance);
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	if (i > 0)
//		printf("��ӭ����������ҫ\n");
//	else
//		printf("��������Ѿ����꣬�˺��ѱ�����\n");
//	return 0;
//}
//n�� �׳ˣ�
//int main()
//{
//	int i = 0, n;
//	long long product = 1;
//	printf("���������� N�Ĵ�С�����enter��\n");
//	scanf("%d", &n);
//	for (i = n; i >=1; i--)
//	{
//		product *= i;
//	}
//	printf("product=%lld\n", product);
//	return 0;
//}
//����1��+2��+3��+......+10!;(�Ż�ǰ)��
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
//����1��+2��+3��+......+10!;(�Ż���)��
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
//���ֲ��ҷ�(�Ż�ǰ����
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
//		printf("�ҵ��ˣ�%d\n", left);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//���ֲ��ҷ����Ż��󣩣�
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
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("�ҵ��ˣ�%d\n", ret);
//	return 0;
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("***************************************\n");
//	printf("*********1.     ��ʼ��Ϸ     **********\n");
//	printf("*********0.     �˳���Ϸ     **********\n");
//	printf("***************************************\n");
//	printf("***************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (num > ret)
//			printf("�´���\n");
//		else
//			printf("��С��\n");
//	}
//}
//int main()
//{
//	int input;
//	srand ((unsigned)time(NULL)) ;
//	do
//	{
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: game();
//			break;
//		case 0:
//			break;
//		default: printf("�������\n");
//			break;
//		}
//	} while (input);
//	printf("\n");
//	return 0;
//}
//��������Ϸ��
//void menu()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("********  1��     ������Ϸ        **********\n");
//	printf("********  0��     �˳���Ϸ        **********\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n");
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
//		printf("���������ѡ��>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:
//			break;
//		default:printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
