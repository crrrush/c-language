#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Max(int x, int y)
{
	int z = 0;
	if (x>y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = Max(a, b);
	printf("c=%d", c);

	return 0;
}
