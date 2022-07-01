#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<time.h>

#include<stdlib.h>


//
//int main()
//{
//	int i = 0, j = 0;
//
//	for (i = 1; i <= 9; i++,printf("\n"))
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d × %d = %d  ", j, i, i * j);
//		}
//	}
//
//
//	
//	return 0;
//}
//

//void menu()
//{
//	printf("猜数字游戏\n");
//	printf("游戏规则：电脑会随机给出1到100之中的一个数字，\n在键盘上输入你猜的数字，猜错了会给出猜大或猜小了的提示\n");
//
//	printf("现在，输入1进入游戏，0退出游戏\n");
//	printf("请输入：");
//}
//
//
//void game()
//{
//	//生成随机数
//	int rad = rand() % 100 + 1;
//	//printf("%d\n", rad);//检查
//
//	int guess = 0;
//	
//	while (1)
//	{
//		scanf("%d", &guess);
//
//		if (guess < rad)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > rad)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦！\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int n = 1;
//
//	srand((unsigned int)time(NULL));//用时间戳设置随机数起点
//
//	menu();
//
//	while (n)
//	{
//		scanf("%d", &n);
//
//		switch (n)
//		{
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		case 1:
//			game();//进入游戏
//			break;
//		case 0:
//			printf("推出游戏！");
//			break;
//		}
//		printf("请输入：");
//	}
//
//
//
//
//	return 0;
//}
