#define _CRT_SECURE_NO_WARNINGS

//注释


#include<stdio.h>


#include<string.h>


//int arr[10]--定义一个存放10个整型数字的数组 、、char 、、float
 //&按位与
//|按位或
//按位异或



int Add(int x, int y)
{
	int z = x + y;
	return z;

}



//int main()
//{
//	int num1 = 10;
//	int num2 = 23;
//	int sum = 0;
//	
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &b, &a);
	sum = Add(a,b);
	printf("sum=%d", sum);





	return 0;
}




//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line<20000)
//	{
//
//
//
//		printf("一行代码\n");
//		line++;
//
//	}
//	if (line>=20000)
//	{
//		printf("好offer\n");
//	}
//
//	
//
//
//
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	printf("大学生活\n");
//	printf("好好学习？(1/0)\n");
//		scanf("%d", &input);
//		if(input ==1)
//	printf("greatoffer\n");
//	else
//		printf("farming\n");
//	return 0;
//}


//int main()
//{
//	printf("(alright\?\?)\n");
//	printf("(alright??)\n");
//	printf("%d\n", strlen("alright\?\?)"));
//	printf("%d\n", strlen("alright??)"));
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	printf("%c\n", '\41');
//
//	return 0;
//}   //转义字符



//int main()
//{
//	char arrp[] = "\0";
//	char arrq[] = "abc";
//	char arrs[] = { 'a','b','c' ,'\0'};
//	printf("%s\n", arrp);
//	printf("%d\n", strlen(arrp));
//	printf("%d\n", strlen(arrq));
//	printf("%d\n", strlen(arrs));
//
//
//	return 0;
//	
//}


//字符串类型
//双引号引起  "abc";   "123":   "";

//数据在计算机上存储的时候，存储的是二进制
	//ASCII 编码    a-97 A-65
	//ASCII 码值


//int main()
//{
//	
//	char arrp[]= "abc";//结尾隐藏\0---字符串的结束标志
//	char arrq[] = { 'a','b','c','\0'};
//	printf("%s\n", arrq);
//	printf("%s\n", arrp);
//
//
//
//
//
//	return 0;
//}


//enum-枚举关键
//
//
//enum Score
//{
//	zero,
//	one,
//	two
//	//以上为枚举常量
//};
//
//int main()
//{
//	enum score a = two;//注意这里的score小写开头
//	printf("%d\n", a);
//	printf("%d\n", one);
//	printf("%d\n", two);
//	printf("%d\n", zero);
//
//
//
//
//	return 1;
//}



//#define gal 123
//
//
//int main()
//{
//	int n = 10;
//	int arr[2] = {0 };
//	printf("%d\n", arr);
//	printf("%d\n", n);
//	printf("%d\n", gal);
//
//
//	return 0;
//}


//int main()
//{
//    const int num = 4;
//	printf("%d\n", num);
//
//
//	return 0;
//}