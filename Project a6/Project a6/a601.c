#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<math.h>


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (0<a<1000)
//	{
//		double z=sqrt(a);
//		printf("%f", z);
//	}
//	else printf("您输入的值必须小于1000\n"),
//		scanf("%d", &a);
//
//
//
//	return 0;
//}


int main()
{
	int a;
	scanf("%d", &a);
	while (a>1000||a<0)
	{
		printf("\awarning!!!\n您输入的值必须是小于1000的整数，请重新输入");
		scanf("%d", &a);
	}
	
	if (0<a<1000)
	{
		double z = sqrt(a);
		z = floor(z);
		printf("%f", z);
	}



	return 0;
}


//int main()
//{
//	printf("\a");
//
//	return 0;
//}