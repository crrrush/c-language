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
			printf("�������Լ����%d\n",n);
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
			printf("�������Լ����%d\n",m);
		}

	}
	return 0;
}


//int main()  //%�Ǵ������ĳ���/���෴  %Ҳ����ģ�������ֻ�����������������ڸ�����
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



//int main()//��C����ʵ��շת�������ŷ������㷨����m��n�������Լ��
//{
//	int m, n;
//	scanf("%d%d", &m, &n);//�������������棬�Ȳ���m,n��С�������࣬����Ĭ��mΪ������nΪС��
//
//
//
//
//
//
//
//	return 0;
//}