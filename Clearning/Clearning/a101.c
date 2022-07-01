#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h>

////int main()
////{
////	printf("char  %15zd\n", sizeof(char));
////	printf("short  %15zd\n", sizeof(short));
////	printf("int  %15zd\n", sizeof(int));
////	printf("long  %15zd\n", sizeof(long));
////	printf("long long  %15zd\n", sizeof(long long));
////	printf("float  %15zd\n", sizeof(float));
////	printf("double  %15zd\n", sizeof(double));
////
////
////
////
////	return 0;
////}
//
//
//
////int main()
////{
////
////    printf("%d\n", strlen("c:\test\121"));
////
////    printf("\060");
////
////    return 0;
////}
//
////int main()
////{
////	int a = 0, b = 0;
////
////	scanf("%d%d", &a, &b);
////
////	printf("%d\n", (a > b ? a : b));
////
////	return 0;
////}
////
////int main()
////{
////    int x = 0, y = 0;
////
////    scanf("%d", &x);
////
////    if (x == 0)
////    {
////        y = 0;
////    }
////    else if (x > 0)
////    {
////        y = -1;
////    }
////    else
////    {
////        y = 1;
////    }
////
////    printf("%d\n", y);
////
////    return 0;
////}
//
//
////int main()
////{
////    float r1 = 0.0, r2 = 0.0;
////
////    scanf("%f%f", &r1, &r2);
////
////    printf("%.2f", 1.0 / ((1.0 / r1) + (1.0 / r2)));
////
////    return 0;
////}
//
//
//int main()
//{
//    printf("printf\(\"Hello world!\\n\"\)\;\n");
//
//    printf("cout << \"Hello world!\" << endl;");
//
//    return 0;
//}
//
//
//
//int main() 
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3] = { 0 };
//
//
//	//输入三个整数
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//
//
//	//在数组中排序
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i + 1; j < 3; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				int change = arr[i];
//				arr[i] = arr[j];
//				arr[j] = change;
//			}
//		}
//
//	}
//
//
//
//	//输出
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 1;
//
//	while (i++ < 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	if (m >= n)
//	{
//		int r;
//		r = m % n;
//		while (r > 0)
//		{
//			m = n;
//			n = r;
//			r = m % n;
//
//		}
//		if (r <= 0)
//		{
//			printf("两数最大公约数是%d\n", n);
//		}
//	}
//	else
//	{
//		int r;
//		r = n % m;
//		while (r > 0)
//		{
//			n = m;
//			m = r;
//			r = n % m;
//
//		}
//		if (r <= 0)
//		{
//			printf("两数最大公约数是%d\n", m);
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 999;
//
//	while (i++ < 2000)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 100, j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//
//			if (j == i - 1)
//				printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1, n = 10;
//	int ret = 1, sum = 0;
//
//	while (n--)
//	{
//		ret *= i++;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//
//
//	while (i++ < 100)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//			printf("%d ", i);
//		}
//
//		//两个独立的判断
//		if (i >= 90 && i < 100)
//		{
//			num++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("有%d个数字9\n", num);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int j = 0;
//	float i = 0.0f;
//	float sum = 0.0f;
//
//
//	//循环相加
//	while (j++ <= 100)
//	{
//		i++;
//		//选择加减
//		if (j % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//
//	}
//
//	printf("%f\n", sum);
//
//	return 0;
//}
//
//
//int  main()
//
//{
//
//	int i = 0;
//
//	double sum = 0.0;
//
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//
//	{
//
//		sum += flag * 1.0 / i;
//
//		flag = -flag;
//
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//
//}

//#define SIZE 10//便于修改数据
//
//int Max(int* p, int n)//返回整型数组最大的一个数，n是数组大小，p是数组首元素地址
//{
//	int max = 0;
//	while (n--)
//	{
//		if (max <= *p)
//			max = *p;
//
//		p++;
//	}
//	return max;
//}
//
//
//int main()
//{
//	int arr[SIZE] = { 100, 0, 478, 3, 516, 2, 89, 8, 7, 6 };
//
//	int m = Max(arr, SIZE);
//
//
//	printf("%d\n", m);
//
//	return 0;
//}


