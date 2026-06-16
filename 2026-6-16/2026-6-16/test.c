#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n / 2 != 0)
//	{
//		sum += n;
//		n = n / 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	printf("      *      \n");
//	printf("     ***     \n");
//	printf("    *****    \n");
//	printf("   *******   \n");
//	printf("  *********  \n");
//	printf(" *********** \n");
//	printf("*************\n");
//	printf(" *********** \n");
//	printf("  *********  \n");
//	printf("   *******   \n");
//	printf("    *****    \n");
//	printf("     ***     \n");
//	printf("      *      \n");
//	return 0;
//}
//




//求出0～100000之间的所有“水仙花数”并输出。“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i <= 100000; i++)
//    {
//        int n = i;
//        int sum = 0;
//        int count = 0;
//        int tmp = n;
//
//        // 计算位数
//        while (tmp)
//        {
//            count++;
//            tmp /= 10;
//        }
//        if (count == 0) count = 1; 
//
//        tmp = n;
//        // 计算每一位的count次方之和
//        while (tmp)
//        {
//            sum += (int)pow(tmp % 10, count);
//            tmp /= 10;
//        }
//        if (n == sum)
//            printf("%d ", n);
//    }
//    return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int res = 0;
//	res = a * 1 + a * 10 + a * 1 + a * 100 + a * 10 + a * 1 + a * 1000 + a * 100 + a * 10 + a * 1 + a * 10000 + a * 1000 + a * 100 + a * 10 + a * 1;
//	printf("%d\n", res);
//	return 0;
//}
//
//
