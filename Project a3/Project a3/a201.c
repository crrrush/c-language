#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Max(int x, int y,int n)
{
	int z = 0;
	if (x>y)
	{
		if (x>n)
		{
			z = x;
		}
		else z = n;
	}
	else
	{
		if (y>n)
		{
			z = y;
		}
		else z = n;
	}
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	int e = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b,&e);
	c = Max(a, b,e);
	printf("c=%d", c);

	return 0;
}
