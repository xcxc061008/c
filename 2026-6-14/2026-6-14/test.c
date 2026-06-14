#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%f\n", sum / 10.0);
//	return 0;
//}




//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int tep = 0;
		tep = a[i];
		a[i] = b[i];
		b[i] = tep;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}