#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//int bin_search(int arr[], int left, int right, int key)
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字
//{
//	while (left <= right)
//	{
//		int mid = left + ((right - left) / 2);
//		if (key < arr[mid])
//			right = mid - 1;
//		else if (key > arr[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int res = bin_search(arr, 0, 9, 7);
//	printf("%d\n", res);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}





//实现函数判断year是不是润年。

//void is_leap_year(int y)
//{
//	if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		printf("是闰年！\n");
//	else
//		printf("不是闰年!\n");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}





//实现一个函数is_prime，判断一个数是不是素数。利用上面实现的is_prime函数，打印100到200之间的素数。
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//创建一个整形数组，完成对数组的操作

//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//void init(int arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i ++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = arr[len - i - 1];
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	init(arr, 10);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr, 10);
//	reverse(arr, 10);
//	print(arr, 10);
//	return 0;
//}




