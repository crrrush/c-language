#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int Y(int x)
{
	int z = 0;
	int k = 0;
	int b = 0;
	scanf("%d%d", &k, &b);
	z = k*x + b;
	return z;
}


int main()
{
	int a = 0;
	int y = 0;
	scanf("%d", &a);
	y = Y(a);
	printf("y=%d\n", y);

	return 0;
}


//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = ADD(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}