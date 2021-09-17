#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	if (m>=n)
	{
		int r;
		r = m % n;
		while (r>0)
		{
			m = n;
			n = r;
			r = m % n;
			
		}
		if (r<=0)
		{
			printf("两数最大公约数是%d\n",n);
		}
	}
	else
	{
		int r;
		r = n % m;
		while (r > 0)
		{
			n = m;
			m = r;
			r = n % m;
			
		}
		if (r <=0)
		{
			printf("两数最大公约数是%d\n",m);
		}

	}
	return 0;
}


//int main()  //%是带余数的除法/则相反  %也叫求模运算符且只能用于整数不能用于浮点数
//{
//	int m = 3;
//	int n = 311;
//	n %= m;
//	printf("%d\n", n);
//	return 0;
//}


//int Max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}



//int main()//用C语言实现辗转相除法（欧几里得算法）求m，n两数最大公约数
//{
//	int m, n;
//	scanf("%d%d", &m, &n);//这里先做个初版，先不对m,n大小做出分类，这里默认m为大数，n为小数
//
//
//
//
//
//
//
//	return 0;
//}