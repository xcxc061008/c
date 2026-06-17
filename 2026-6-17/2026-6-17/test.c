#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fic(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fic(n - 1) + fic(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = fic(n);
//	printf("%d\n", res);
//	return 0;
//}

//
//int pow(int n, int k)
//{
//	int sum = 1;
//	int i = 0;
//	for (i = 1; i <= k; i++)
//	{
//		sum *= n;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int res = pow(n, k);
//	printf("%d", res);
//	return 0;
//}

//int DigitSum(int n)
//{
//	int sum = 0;
//	while (n  > 0)
//	{
//		sum += n % 10;
//		n = n / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = DigitSum(n);
//	printf("%d\n", res);
//	return 0;
//}

//
//int A(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * A(n - 1);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = A(n);
//	printf("%d\n", res);
//	return 0;
//}


void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}