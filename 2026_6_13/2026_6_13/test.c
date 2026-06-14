#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int max = 0;
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] > max)
//			max = arr[j];
//	}
//	printf("%d", max);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1/i;
//		else
//			sum -= 1/i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			cnt += 1;
//		if (i / 10 == 9)
//			cnt += 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}









//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}



//#include<stdio.h>
//int gcd(int x, int y)
//{
//	if (y == 0)
//		return x;
//	return gcd(y, x % y);
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", gcd(a, b));
//	return 0;
//}